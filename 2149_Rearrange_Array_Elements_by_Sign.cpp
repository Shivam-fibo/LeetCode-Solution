class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
        vector<int>pos;
        vector<int>neg;
        for(auto i: nums){
            if(i > 0) pos.push_back(i);
            else neg.push_back(i);
        }
        int i =0;
        while(i< pos.size() || i < neg.size()){
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
            i++;

        }
        return ans;
    }
};