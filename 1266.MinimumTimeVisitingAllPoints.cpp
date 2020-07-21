class Solution {
public:
    //cc compute time to visit from p1 to p2
  int timeToVisit(const vector<int>& p1, const vector<int>& p2) {
    int dx = abs(p1[0]-p2[0]), dy = abs(p1[1]-p2[1]);
    return min(dx, dy) + abs(dx - dy); // or just max(dx, dy), 
  }
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
    int minTime = 0;
    for (int i = 1; i < points.size(); i++)
      minTime += timeToVisit(points[i-1], points[i]);
    
    return minTime;
        
    }
};
