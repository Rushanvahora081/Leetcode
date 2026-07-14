class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        int srow=0,erow=m-1,scol=0,ecol=n-1;
        vector<int>ans;

        while(srow<=erow&&scol<=ecol)
        {

            //Top

            for(int i=scol;i<=ecol;i++)
            {
                ans.push_back(mat[srow][i]);
            }

            //Right

            for(int j=srow+1;j<=erow;j++)
            {
                ans.push_back(mat[j][ecol]);
            }

            //Bottom

            for(int i=ecol-1;i>=scol;i--)
            {
                if(srow==erow)
                break;
                ans.push_back(mat[erow][i]);
            }

            //Left

            for(int j=erow-1;j>=srow+1;j--)
            {
                if(scol==ecol)
                break;
                ans.push_back(mat[j][scol]);
            }

            srow++;scol++;
            erow--;ecol--;
        }
        return ans;
    }
};