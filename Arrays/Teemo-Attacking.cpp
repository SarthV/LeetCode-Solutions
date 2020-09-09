class Solution {
public:
    int findPoisonedDuration(vector<int>& A, int d) {
        int n = A.size();
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return d; 
        }
        int i = 1;
        int cost = d;
        int reach = A[0] + d - 1;
        while(i < n){
            if(reach < A[i]){
                cost += d;
                reach = A[i] + d - 1 ;
            }
            else{
                cost += d + A[i] - 1 - reach;
                reach += d + A[i] - 1 - reach;
            }
            i++;
        }
        return cost;
    }
};