class Solution {
public:
    
    bool isalphaNum(char ch)
    {
        
        return ((ch>='A' && ch<='Z')||(ch>='a' && ch<='z')||(ch>='0' && ch<='9'));

    }
    bool isPalindrome(string s) {
        int st=0;
        int end=s.size()-1;

        while(st<end)
        {
            if(!isalphaNum(s[st]))
            {
                st++;
                continue;
            }
            if(!isalphaNum(s[end]))
            {
                end--;
                continue;
            }


            if(tolower(s[st])!=tolower(s[end]))
            return false;

            st++;
            end--;
        }

        return true;
    }
};