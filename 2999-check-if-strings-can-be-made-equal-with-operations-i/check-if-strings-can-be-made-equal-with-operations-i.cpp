class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        int n = s1.length();
        for(int i=0;i<n;i++){
            if((s1[i]!=s2[(i+2)%n]) && (s1[i]!=s2[i]))
                return false;
        }
        return true;
    }
};