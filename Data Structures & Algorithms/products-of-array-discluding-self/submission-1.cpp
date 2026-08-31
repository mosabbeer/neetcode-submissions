class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1;
        vector<int>front;
        front.push_back(prod);
        vector<int>back;
        back.push_back(prod);
        for(int i=0;i<nums.size()-1;i++)
        {
            prod*=nums[i];
            front.push_back(prod);
        }
        prod=1;
        for(int i=nums.size()-1;i>0;i--)
        {
            prod*=nums[i];
            back.push_back(prod);
        }
        reverse(back.begin(),back.end());
        for(int i=0;i<front.size();i++)
        {
            front[i]*=back[i];
        }
        return front;
    }
};
