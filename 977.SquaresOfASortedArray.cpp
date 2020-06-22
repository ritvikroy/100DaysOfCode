class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> nums;
        for(int i = 0; i < A.size(); i++) {
            nums.push_back(pow(A[i], 2));
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};
