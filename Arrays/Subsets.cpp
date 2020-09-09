class Solution {
public:
    void fun(vector<int>&A, vector<int>&temp, set<vector<int>>&myset, int i){
        if(i == A.size()){
            myset.insert(temp);
            return;
        }
        fun(A,temp,myset,i+1);
        temp.push_back(A[i]);
        fun(A,temp,myset,i+1);
        temp.pop_back();
        return;
    }
    vector<vector<int>> subsets(vector<int>& A) {
        int n = A.size();
        vector<int>temp;
        vector<vector<int>>ans;
        set<vector<int>>myset;
        set<vector<int>>::iterator it;
        fun(A,temp,myset,0);
        for(it = myset.begin(); it != myset.end(); it++){
            ans.push_back(*it);
        }
        return ans;
    }
};