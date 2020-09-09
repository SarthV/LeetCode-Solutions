class Solution {
public:
    vector<int> twoSum(vector<int>& A, int t) {
        int n = A.size();
        vector<int>ans;
        unordered_map<int, int>hash;
        for(int i = 0 ; i < n ; i++){
            hash[A[i]] = i+1;
        }
        for(int i = 0; i  < n;  i++){
            if(hash[t-A[i]] && hash[t-A[i]]-1 != i){
                ans.push_back(i);
                ans.push_back(hash[t-A[i]]-1);
                return ans;
            }
        }
        return ans;
    }
};