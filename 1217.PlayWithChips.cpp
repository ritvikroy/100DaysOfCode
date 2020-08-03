class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
        vector<int> costs(2);
        for(int & v : chips)
            ++costs[v & 1];
        return min(costs[0], costs[1]);
    }
};
