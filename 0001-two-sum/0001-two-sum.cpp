class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //use hash map 
        //unordered_map<int, int> numMap;

        //for(int i = 0; i < nums.size(); i++){
        //    int complement = target - nums[i];
        //    if(numMap.count(complement)) {
        //        return {numMap[complement], i};
        //    }
        //    numMap[nums[i]] = i;
        //}
        //return {};

        //Brute Force
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    return{i, j};
                }
            }
        }
        return {};
    }
};