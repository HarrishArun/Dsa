class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>mp;
        for(auto a:s){
            mp[a]++;
        
        }
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]==1) return i;

            cout<<mp[s[i]];
         
    }   return -1;
        }

};
