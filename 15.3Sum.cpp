class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> triplet(3);
        int front, rear;
        
        sort(nums.begin(), nums.end());
        // [-1, 0, 1, 2, -1, -4] --> [-4, -1, -1. 0. 1, 2]
        
        for (int i = 0; i<nums.size(); i++){
            int target = -nums[i]; // 4
            front = i+1; 
            rear = nums.size() - 1;
            while(front < rear){
                int sum = nums[front] + nums[rear];
                
                if (sum < target){
                    front++;
                } else if(sum > target){
                    rear--; 
                } else{
                    //found
                    triplet[0] = nums[i];
                    triplet[1] = nums[front];
                    triplet[2] = nums[rear];
                    result.push_back(triplet);
                    
                
                    while(front < rear && nums[front] == triplet[1])
                        front++; // Processing duplicates of Number 2
                    while(front < rear && nums[rear] == triplet[2])
                        rear--;// Processing duplicates of Number 3
                }
            }
            while (i+1 < nums.size() && nums[i+1] == nums[i])
                i++; // Processing duplicates of Number 2
            
        }
        return result;
    }
};
