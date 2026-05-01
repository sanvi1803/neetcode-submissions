class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        
        // Count frequencies
        for (int num : nums) {
            mp[num]++;
        }

        // Min heap: {frequency, number}
        priority_queue<
            pair<int, int>, 
            vector<pair<int, int>>, 
            greater<pair<int, int>>
        > pq;

        // Maintain top k elements
        for (auto it : mp) {
            pq.push({it.second, it.first});
            if (pq.size() > k) {
                pq.pop();
            }
        }

        // Extract results
        vector<int> result;
        while (!pq.empty()) {
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result;
    }
};