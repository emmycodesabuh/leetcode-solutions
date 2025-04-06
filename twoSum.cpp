// This code uses unoredered map to store the numbers and their indices
// It iterates through the array checking if the complement (target - current number) is in the map.
// If it is, it returns the indices of the complement and the current number.
// If not, it adds the current number and its index to the map

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> numIndex;
            for(int i = 0; i < nums.size(); i++) {
             
                int comp = target - nums[i];
                
                if(numIndex.count(comp)) {
                    return {numIndex[comp], i};
                }

                numIndex[nums[i]] = i;
            } 
            // if condition not met, return empty vector int
            return {};
        }
};
