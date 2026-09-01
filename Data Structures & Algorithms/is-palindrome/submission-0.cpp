class Solution {
public:
    bool isPalindrome(string s) {
        string st="";
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z')||(s[i]>='0' && s[i]<='9'))
            {
                s[i]=tolower(s[i]);
                st+=s[i];
            }
        }
        int l=0,r=st.size()-1;
        while(l<r)
        {
            if(st[l]!=st[r])
            return false;
            l++,r--;
        }
        return true;
    }
};
