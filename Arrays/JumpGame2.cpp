class Solution {
public:
    int jump(vector<int>& A) {
        int n = A.size();
        if(n <= 1){
            return 0;
        }
        int maxreach = A[0];
        int steps = A[0];
        int jumps = 1;
        for(int i = 1; i < n-1 ; i++){
            maxreach = max(maxreach, A[i]+i);
            steps--;
            if(steps == 0){
                jumps++;
                steps = maxreach-i; 
            }
        }
        return jumps;
    }
};