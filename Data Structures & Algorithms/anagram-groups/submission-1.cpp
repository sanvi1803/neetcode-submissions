class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(const auto& s : strs){
            string sortedVal = s;
            sort(sortedVal.begin(),sortedVal.end());
            mp[sortedVal].push_back(s);
        }

        vector<vector<string>> result;
        for(auto& it : mp){
            result.push_back(it.second);
        }
        return result;
    }
};
