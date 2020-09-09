class Solution {
public:
    void fun(vector<vector<int>>&ans, vector<int>&temp, vector<int>&A, int index, int sum, int t){
        if(sum == t){
            ans.push_back(temp);
            return;
        }
        if(index == A.size()){
            return;
        }
        if(sum > t){
            return;
        }
        fun(ans, temp,A, index+1,sum,t);
        temp.push_back(A[index]);
        fun(ans, temp, A, index, sum+A[index],t);
        temp.pop_back();
        return;
        
    }
    vector<vector<int>> combinationSum(vector<int>& A, int t) {
        int n = A.size();
        vector<vector<int>>ans;
        vector<int>temp;
        fun(ans, temp, A, 0, 0, t);
        return ans;
    }
};