class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        //vector<bool>row(m);
        vector<bool>col(n);
        for(int i=0;i<m;i++)
         {
             for(int j=0;j<n;j++)
             {
                 if(matrix[i][j]==0)
                 {
                   //  row[i]=true;
                     col[j]=true;
                     cout<<i<<"#"<<j<<endl;
                 }
             }
         }
         for(int i=0;i<m;i++)
         {
             bool contains_zero=false; 
             for(int j=0;j<n;j++)
             {
                if(matrix[i][j]==0)
                {
                    contains_zero=true;
                    cout<<i<<" "<<j<<endl;
                    break;
                }
             }
             for(int j=0;j<n;j++)
             {
                 if(contains_zero||col[j])
                 {
                     matrix[i][j]=0;
                 }
             }
         }
    }
};