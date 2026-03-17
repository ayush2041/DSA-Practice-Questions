class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> arr;  // {value, original_index}
        for(int i = 0; i < nums.size(); i++){
            arr.push_back({nums[i], i});
        }
        
        // sort by value
        sort(arr.begin(), arr.end());
        
        int st = 0, end = arr.size()-1;
        while(st < end){
            int currSum = arr[st].first + arr[end].first;
            if(currSum == target){
                return {arr[st].second, arr[end].second}; // return original indices
            } else if(currSum > target){
                end--;
            } else {
                st++;
            }
        }
        return {}; // problem guarantees a solution
    }
};
