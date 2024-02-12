class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> ump;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            ump[nums[i]]++;
        }

        for (const auto& entry : ump) {
            if (entry.second > n / 2) {
                return entry.first;
            }
        }

      
        return -1;
    }
};
