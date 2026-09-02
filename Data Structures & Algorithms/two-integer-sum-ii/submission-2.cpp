class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int l=0,r=numbers.size()-1;
        while(l<r)
        {
            int p=numbers[l]+numbers[r];
            if(p<target)
            l++;
            else if(p>target)
            r--;
            else
            {
                return {l+1,r+1};
            }
        }
        return ans;
    }
};
