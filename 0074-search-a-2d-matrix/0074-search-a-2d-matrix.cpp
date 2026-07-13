class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat.size(),n=mat[0].size();
        int StartRow=0,EndRow=m-1;
        
        while(StartRow<=EndRow)
        {
            int MidRow=StartRow+(EndRow-StartRow)/2;

            if(target>=mat[MidRow][0] && target<=mat[MidRow][n-1])
            {
                int st=0,end=n-1;

                while(st<=end)
                {
                    int mid=st+(end-st)/2;

                    if(target==mat[MidRow][mid])
                    {
                        return true;
                    }
                    else if(mat[MidRow][mid]<=target)
                    {
                        st=mid+1;
                    }
                    else
                    {
                        end=mid-1;
                    }
                }
                return false;
            }
            else if(target>=mat[MidRow][n-1])
            {
                StartRow=MidRow+1;
            }
            else
            {
                EndRow=MidRow-1;
            }
        }
        return false;
    }
};