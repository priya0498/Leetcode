class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        map<string,int> mp;
        int n=words.size();
        for(int i=0;i<n;i++)
        {
            mp[words[i]]++;
        }
        int ans=0;
        bool flag=false;
        int palindromicStrings=0;
        for(auto &i:mp)
        {
            string str=i.first;
            if(str[0]==str[1])
            {
                if(mp[str]%2)
                {
                    flag=true;
                    palindromicStrings+=(mp[str]-1);
                }
                else
                {
                    palindromicStrings+=mp[str];
                }
                mp.erase(str);
            }
            else
            {
                string rev=str;
                reverse(rev.begin(),rev.end());
                if(mp.find(rev)!=mp.end())
                {
                    ans=ans+min(mp[rev],mp[str])*4;
                    mp.erase(rev);
                    mp.erase(str);
                }
            }
        }
        if(flag)
        {
            return ans+palindromicStrings*2+2;
        }
        else
        {
            return ans+palindromicStrings*2;
        }
    }
};