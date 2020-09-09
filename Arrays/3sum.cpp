class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& A) {
        int n = A.size();
        vector<vector<int>> ans;
        sort(A.begin(), A.end());
        for(int i = 0 ; i  < n-1 ; i++){
            if(i != 0 && A[i] == A[i-1]){
                continue;
            }
            int l = i+1;
            int r = n-1;
            if(A[i] > 0 && A[l] > 0 && A[r] > 0){
                return ans;
            }
            while(l < r){
                long long int sum;
                sum = (A[i]) + A[l] + (A[r]);
                if(sum == 0){
                    vector<int>temp;
                    temp.push_back(A[i]);
                    temp.push_back(A[l]);
                    temp.push_back(A[r]);
                    ans.push_back(temp);
                    l++;
                    r--;
                    while(l < r && A[l] == A[l-1]){
                        l++;
                    }
                    while(l < r && A[r] == A[r+1]){
                        r--;
                    }
                    
                }
                else if(sum>0){
                    r--;
                }
                else{
                    l++;
                }
            }
        }
        return ans;
    }
};