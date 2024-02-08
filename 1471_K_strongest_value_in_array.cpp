class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        vector<pair<int,int>>v;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int median=arr[(n-1)/2];
        for(int i=0;i<arr.size();i++)
        {
            v.push_back({abs(arr[i]-median),arr[i]});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        vector<int>ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(v[i].second);
        }
        return ans;

    }
};