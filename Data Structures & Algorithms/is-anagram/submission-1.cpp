class Solution {
public:
    bool isAnagram(string s, string t) {
      map<int,int>a;
        for(int i=0;i<s.size();i++)
        {
            a[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
            a[t[i]]--;
        }
        for(auto x:a)
        {
            if(x.second!=0)
            return false;
        }
        return true;
    }
};
