class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> result;
        unordered_map<int,int> mp;
        for(int i = 0;i < n;i++){
            mp[nums[i]] = i;
        }
        for(int i = 0;i < n;i++){
            int rem = target - nums[i];
            if(mp.find(rem) != mp.end() && mp[rem] > i){
                result.push_back(i);
                result.push_back(mp[rem]);
                return result;
            }
        }
        return {};
    }
};
