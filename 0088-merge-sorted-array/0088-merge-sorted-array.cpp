class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {

        int idx=m+n-1,i=m-1,j=n-1;

        while(i>=0&&j>=0)
        {
            if(num1[i]>=num2[j])
            {
                num1[idx]=num1[i];
                idx--;
                i--;
            }
            else
            {
                num1[idx]=num2[j];
                idx--;
                j--;
            }
        }

        while(j>=0)
        {
            num1[idx]=num2[j];
            j--;
            idx--;
        }
        
    }
};