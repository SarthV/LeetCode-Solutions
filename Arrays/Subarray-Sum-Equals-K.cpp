class Solution {
public:
    int subarraySum(vector<int>& A, int k) {
        unordered_map<int,int>hash;
        int n = A.size();
        if(n == 0){
            return 0;
        }
        int count = 0;
        int sum = 0;
        bool flag = true;
        for(int i = 0 ; i  < n ;  i++){
            if(A[i] != 0){
                flag = false;
                break;
            }
        }
        if(flag){
            return n*(n+1)/2;
        }
        for(int i = 0 ; i  < n; i ++){
            sum = sum + A[i];
            if(sum == k){
                count++;
            }
            else{
                //if(hash.find(sum-k)!=hash.end()){
                    count += hash[sum-k];
                //}
            }
            hash[sum]++;
        }
        return count;
    }
};