class Solution {
public:
    void nextPermutation(vector<int>& A) {
        int n = A.size();
        if(n <= 1){
            return;
        }
        int p = 0;
        int i = -1;
        while(p < n-1){
            if(A[p+1] > A[p]){
                i = p;
            }
            p++;
        }
        if(i == -1){
            sort(A.begin(), A.end());
            return;
        }
        int index = i+1;
        for(int j = i+1; j < n ; j++){
            if(A[j] > A[i]){
                index = j;
            }
        }
        int temp = A[index];
        A[index] = A[i];
        A[i] = temp;
        
        reverse(A.begin()+i+1, A.end());
        return;
    }
};