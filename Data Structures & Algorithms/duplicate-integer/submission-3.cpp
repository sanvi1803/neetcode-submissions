class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i : nums){
            mp[i]++;
        }
        for(auto& i : mp){
            int  freq = i.second;
            if(freq > 1)
                return true;
        }
        return false;
    }
};