class Solution {
public:

    bool isvowel(char ch)
    {
        ch=tolower(ch);

        return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
    }
    string reverseVowels(string s) {
        int n=s.size();
        int st=0,end=n-1;


        while(st<end)
        {
            while(st<end && !isvowel(s[st]))
            st++;
            while(st<end && !isvowel(s[end]))
            end--;

            swap(s[st],s[end]);
            st++;
            end--;
        }
        return s;
    }
};