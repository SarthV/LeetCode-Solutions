class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& A, int k) {
        int n = A.size();
        cout << n;
        if(k == 0){
            return 0;
        }
        long long  count = 0;
        int i = 0;
        long long ptillnow = 1;
        int  j = 0;
        while(j < n){
            ptillnow *= A[j]; 
                //ptillnow = ptillnow*(long long)A[j];
                
            
            while(i<=j && ptillnow>=k){
                ptillnow = ptillnow/(long long)A[i];
                i++;
            }
            count += (long long)j - (long long)i + 1;
            j++;
        }
        return count;
    }
};