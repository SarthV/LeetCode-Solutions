class Solution {
public:
    int maxProfit(vector<int>& A, int f) {
        int n = A.size();
        if(n < 2){
            return 0;
        }
        int ans = 0;
        int smallest = -A[0];
        for(int i = 1; i < n ; i++){
            ans = max(ans, smallest+A[i]-f);
            smallest = max(smallest, ans-A[i]);
        }
        return ans;
    }
};