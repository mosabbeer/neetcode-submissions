class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>temp;
        for(int i=0;i<nums.size();i++)
        {
            temp[nums[i]]++;
        }
        vector<pair<int,int>>t;
        for(auto it:temp)
        {
            t.push_back({it.second,it.first});
        }
        sort(t.begin(),t.end());
        vector<int>ans;
        int n=t.size()-1;
        while(k--)
        {
            ans.push_back(t[n].second);
            n--;
        }
        return ans;
    }
};
