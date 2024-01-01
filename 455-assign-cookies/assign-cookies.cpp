class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int content=0;
        int greedS=g.size();
        int availS=s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        for(int i=0,j=0;i<greedS && j<availS;){
            if(s[j]>=g[i]){
                content++;
                i++;
                j++;
            }else{
                j++;
            }
        }
        return content;
        
    }
};