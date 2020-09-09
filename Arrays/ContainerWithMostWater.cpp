class Solution {
public:
    int maxArea(vector<int>& A) {
        int n = A.size();
        if(n < 2){
            return 0;
        }
        int i = 0 ;
        int j = n-1 ;
        int ans =  INT_MIN;
        while(i < n && j >=0 && i<j){
            ans = max(ans, min(A[i],A[j])*(j-i));
            if(A[i]< A[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return ans;
    }
};