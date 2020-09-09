class Solution {
public:
    bool dfs(vector<vector<char>>& A, string B, vector<vector<int>>&dp, int i, int j, int k){
        if(dp[i][j] != 0){
            return 0;
        }
        if(k == B.size()-1 && A[i][j] == B[k]){
            return 1;
        }
        if(A[i][j] != B[k]){
            return 0;
        }
        dp[i][j] = 1;
        if(i+1<A.size()){
            if(dfs(A,B,dp,i+1,j,k+1)){
                return 1;
            }
        }
        if(j+1<A[0].size()){
            if(dfs(A,B,dp,i,j+1,k+1)){
                return 1;
            }
        }
        if(j-1>=0){
            if(dfs(A,B,dp,i,j-1,k+1)){
                return 1;
            }
        }
        if(i-1>=0){
            if(dfs(A,B,dp,i-1,j,k+1)){
                return 1;
            }
        }
        dp[i][j] = 0;
        return 0; 
    }
    
    bool exist(vector<vector<char>>& A, string B) {
        int n = A.size();
        int m = A[0].size();
        vector<vector<int>>dp(n, vector<int>(m,0));
        for(int i = 0 ; i < n ; i ++){
            for(int j = 0  ; j  < m ; j ++){
                if(dfs(A,B,dp,i,j,0)){
                    return true;
                }
            }
        }
        return false;
    }
};