class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        vector<int>rowcell;
        vector<int>colcell;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {

             if(matrix[i][j]==0)
             {
                rowcell.push_back(i);
                colcell.push_back(j);
             }

            }
        }

        for(int k=0;k<rowcell.size();k++)
        {
            int r=rowcell[k];

            for(int i=0;i<n;i++)
            {
                matrix[r][i]=0;
            }
        }
        for(int k=0;k<colcell.size();k++)
        {
            int c=colcell[k];

            for(int i=0;i<m;i++)
            {
                matrix[i][c]=0;
            }
        }
    }
};