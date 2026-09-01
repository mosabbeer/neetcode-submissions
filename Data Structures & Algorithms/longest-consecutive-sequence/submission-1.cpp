class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi=1,count=1;
        if(nums.size()==0)
        return 0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            continue;
            if((nums[i]-nums[i-1])==1)
            count++,maxi=max(maxi,count);
            else
            count=1;
           // maxi=max(maxi,count);
        }
        return maxi;
    }
};
