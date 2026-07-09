class Solution {
public:


    bool isValid(vector<int>& quantities, int n, int maxAllow) {
        int storesNeeded = 0;

        for (int quantity : quantities) {
            storesNeeded += (quantity + maxAllow - 1) / maxAllow;

            if (storesNeeded > n)
                return false;
        }

        return true;
    }


    int minimizedMaximum(int n, vector<int>& quantities) {
        int st = 1;
        int end = *max_element(quantities.begin(), quantities.end());
        int ans = end;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (isValid(quantities, n, mid)) {
                ans = mid;
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }

        return ans;
    }
};