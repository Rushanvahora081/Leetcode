class Solution {
public:
    bool isfreqsame( vector<int>& freq1,vector<int>& freq2)
    {
        for(int i=0;i<26;i++)
        {
            if(freq1[i]!=freq2[i])
            return false;
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        vector<int>freq1(26,0);
        

        for(char ch : s1)
        {
            freq1[ch-'a']++;
        }
        int windsize=s1.size();

        for(int i=0;i<s2.size();i++)
        {
            int windidx=0,idx=i;
            vector<int>freq2(26,0);
            while(windidx<windsize && idx<s2.size())
            {
                freq2[s2[idx]-'a']++;
                windidx++;idx++;

                if(isfreqsame(freq1,freq2))
                return true;
            }
        }

        return false;
    }
};