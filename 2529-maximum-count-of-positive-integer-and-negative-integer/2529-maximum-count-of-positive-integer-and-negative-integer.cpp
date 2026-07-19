class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int st=0;
        int end=n;

        while(st<end)
        {
            int mid=st+(end-st)/2;

            if(nums[mid]<0)
            {
                st=mid+1;
            }
            else
            end=mid;
        }

        int negative=st;

        st=0;
        end=n;

        while(st<end)
        {
            int mid=st+(end-st)/2;

            if(nums[mid]<=0)
            {
                st=mid+1;
            }
            else{
                end=mid;
            }
        }
        int positive=n-st;

        return max(positive,negative);
    }
};