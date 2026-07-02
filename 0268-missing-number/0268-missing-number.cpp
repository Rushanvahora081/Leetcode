class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        int expectedsum=n*(n+1)/2;
        int actualsum=0;

        for(int num:nums)
        {
            actualsum+=num;
        }

        return expectedsum-actualsum;
    }
};