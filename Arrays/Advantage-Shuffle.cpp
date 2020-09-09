class Solution {
public:
    vector<int> advantageCount(vector<int>& A, vector<int>& B) {
        int n = B.size();
        vector<pair<int, int>>arr;
        for(int i = 0 ; i  < n ; i++){
            arr.push_back({B[i], i});
        }
        sort(arr.begin(), arr.end());
        vector<int>ans(n);
       sort(A.begin(), A.end());
        int start = 0;
        int s1= 0;
        int e1= n - 1;
        
        while(start < n){
            if(A[start] > arr[s1].first){
                ans[arr[s1].second] = A[start];
                s1++;
            }
            else{
                ans[arr[e1].second] =  A[start];
                e1--;
            }
            start++;
        }
        return ans;
    }
};