class Solution {
public:
    int minCostToMoveChips(vector<int>& A) {
        int n = A.size();
        int ev = 0;
        int odd = 0;
        for(int i = 0 ; i <  n ; i++){
            if(A[i]%2 == 0){
                ev++;
            }else{
                odd++;
            }
        }
        return min(ev, odd);
        
    }
};