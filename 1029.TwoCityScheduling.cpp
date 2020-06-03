class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {

        sort(costs.begin(), costs.end(),[](const vector <int> &a, const vector <int> &b){
            return a[1] -a[0] > b[1] - b[0];
        });
            int sum = 0;
        for(int i = 0; i < costs.size(); i++) { 
            sum += i >=costs.size()/2?costs[i][1]:costs[i][0];
        }
          return sum;
    }
};
