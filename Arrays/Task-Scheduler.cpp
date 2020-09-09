class Solution {
public:
    int leastInterval(vector<char>& A, int k) {
        int n = A.size();
        vector<int>hash(26,0);
        for(int i = 0 ; i  < n ; i++){
            hash[A[i] - 'A']++;
        }
        int maxc = 0; 
        for(int i = 0; i < 26 ; i++){
            maxc = max(maxc, hash[i]);
        }
        int j = 0;
        for(int i = 0 ; i  < 26; i++){
            if(hash[i] == maxc){
                j++;
            }
        }
        cout << j;
        return max(n, (maxc-1)*(k+1)+j);
    }
};