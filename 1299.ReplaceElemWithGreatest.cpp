class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for(int i = 0; i < arr.size(); i++) {
            int set = 0;
            for(int j = i + 1; j < arr.size(); j++) {
                if(arr[j] > set) {
                    set = arr[j];
                    arr[i] = set;
                }
            }
        }
        arr[arr.size() - 1] = -1;
        return arr;
    }
};
