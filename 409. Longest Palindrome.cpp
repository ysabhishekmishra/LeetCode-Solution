class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>m;
        for(auto i:s)m[i]++;
        bool flag=false;
        int ma=0,ans=0;
        for(auto i:m){
            if(i.second%2==0){
                ans+=i.second;
            }
            else if(i.second%2!=0){
                ans+=i.second-1;
                flag=true;
            }
        }
        if(flag)return ans+1;
        return ans;
    }
};
