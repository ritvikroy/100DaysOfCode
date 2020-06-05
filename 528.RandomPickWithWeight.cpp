class Solution {
    vector<int> w_cum;
    int sum;
public:
    Solution(vector<int>& w) {
        sum = 0;
        for(int i : w) {
            sum += i;
            w_cum.push_back(sum);
        }
        
    }
    
    int pickIndex() {
        int idx = rand() % sum;
        return binarySearch(idx + 1);
    }
    
    int binarySearch(int val) {
        int l = 0;
        int r = w_cum.size() - 1;
        while(l < r) {
            int mid = (l + r)/2;
            if(w_cum[mid] < val)
                l = mid + 1;
            else {
                r = mid;
            }
        }
        return l;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
