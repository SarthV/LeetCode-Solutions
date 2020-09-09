class Solution {
public:
    int maxSubArray(vector<int>& A) {
        int n = A.size();
        int ans = INT_MIN;
        int curr = 0;
        //int sum = 0;
        for(int i = 0 ; i  < n;  i++){
            //sum += A[i];
            curr = max(A[i], curr+A[i]);
            ans = max(ans, curr);
        }
        return ans;
    }
};