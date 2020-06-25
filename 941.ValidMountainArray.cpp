class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        int index = -1;
        if(A.size() < 3) return false;
        
        for(int i = 1; i < A.size() - 1; i++) {
            if((A[i] - A[i -1] > 0) && (A[i] - A[i + 1] > 0)) {
                index = i;
                break;
            }
        }
        if(index == -1) return false;
        for(int j = index; j > 0; j--) {
            if(A[j] > A[j - 1]) continue;
            else return false;
        }
        for(int k = index; k < A.size() - 1; k++) {
            if(A[k] > A[k + 1]) continue;
            else return false;
        }
        return true;
    }
};
