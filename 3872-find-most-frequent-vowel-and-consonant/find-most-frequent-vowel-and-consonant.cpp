class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> mp;
        unordered_map<char,int> mpp;
        
        for(int i=0;i<s.size();i++) {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]== 'o' || s[i]=='u') {
                mp[s[i]]++;
            }
            else {
                mpp[s[i]]++;
            }
        }
        int maxi1 =0;
        int maxi2 =0;
        for(int i=0; i<26; i++) {
      maxi1 = max(maxi1, mp['a' + i]);
}

for(int i=0; i<26; i++) {
    maxi2 = max(maxi2, mpp['a' + i]);
}
return maxi1+maxi2;
    }
};