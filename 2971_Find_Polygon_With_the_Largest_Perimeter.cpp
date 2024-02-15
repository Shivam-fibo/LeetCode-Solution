class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long currentSum = 0, result = -1;
        for(int num: nums){
            if(num < currentSum){
                result = num+currentSum;
            }
                currentSum += num;
        }
        // return -1;
            return result;
    }
};