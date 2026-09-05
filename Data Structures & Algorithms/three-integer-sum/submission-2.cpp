class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        set<vector<int>>tempu;
        for(int i=0;i<nums.size()-2;i++)
        {
           if(nums[i]>0)
           break;
            int l=i+1,r=nums.size()-1;
            while(l<r)
            {
                vector<int>temp;
                if(nums[i]+nums[l]+nums[r]==0)
                {
                    temp.push_back(nums[i]);
                    temp.push_back(nums[l]);
                    temp.push_back(nums[r]);
                    sort(temp.begin(),temp.end());
                    tempu.insert(temp);
                    
                }
                if(nums[i]+nums[l]+nums[r]<=0)
                l++;
                else
                r--;
            }

        }
        for(auto it: tempu)
        {
            ans.push_back(it);
        }
        return ans;
    }
};
