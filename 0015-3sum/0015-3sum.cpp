class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {

            if (i > 0 && nums[i] == nums[i - 1])
                    continue;
            int st = i + 1, end = n - 1;

            while (st < end) {
                
                if (nums[i] + nums[st] + nums[end] == 0) {
                    ans.push_back({nums[i], nums[st], nums[end]});
                    st++;
                    end--;

                    while (st < end && nums[st] == nums[st - 1])
                        st++;

                    while (st < end && nums[end] == nums[end + 1])
                        end--;
                } else if (nums[i] + nums[st] + nums[end] < 0) {
                    st++;
                } else {
                    end--;
                }
            }
        }
        return ans;
    }
};