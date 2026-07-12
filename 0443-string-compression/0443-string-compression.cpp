class Solution {
public:
    int compress(vector<char>& chars) {
         int n = chars.size();
        int i = 0;
        int index = 0;

        while (i < n) {

            char current = chars[i];
            int count = 0;

            while (i < n && chars[i] == current) {
                count++;
                i++;
            }

            chars[index++] = current;

            if (count > 1) {
                string s = to_string(count);

                for (char ch : s) {
                    chars[index++] = ch;
                }
            }
        }

        return index;
    }
};