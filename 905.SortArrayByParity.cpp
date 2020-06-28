class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int i=0;
        for(int j=0;j<A.size();++j){
            if(A[j]%2==0){
                swap(A[i],A[j]);
                i++;
            }
        }
        return A;
    }
};
