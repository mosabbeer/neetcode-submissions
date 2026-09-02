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
                ans.push_back(l+1);
                ans.push_back(r+1);
                return ans;
            }
        }
        return ans;
    }
};
