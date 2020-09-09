class Solution {
public:
    void fun(set<vector<int>>&myset, int index, int sum, int t, vector<int>&temp, vector<int>&A){
        if(sum == t){
            vector<int> y = temp;
            sort(y.begin(), y.end());
            myset.insert(y);
            return;
        }
        if(sum > t || index == A.size()){
            return;
        }
        fun(myset, index+1, sum,t,temp,A);
        temp.push_back(A[index]);
        fun(myset, index+1, sum+A[index],t, temp,A);
        temp.pop_back();
        return;
    }
    
    vector<vector<int>> combinationSum2(vector<int>& A, int t) {
        vector<vector<int>> ans;
        vector<int>temp;
        set<vector<int>>myset;
        fun(myset, 0,0,t,temp,A);
        set<vector<int>>::iterator it;
        for(it = myset.begin(); it != myset.end(); it++){
            ans.push_back(*it);
        }
        return ans;
    }
};