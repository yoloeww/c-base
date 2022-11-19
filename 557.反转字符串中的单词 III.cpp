class Solution {
public:
    string reverseWords(string s) 
    {
       string ret;
       int len = s.size();
       int i = 0 ;
       while(i < len)
       {
           int start = i;
           while(i < len && s[i] != ' ')
           {
               i++;
           }
           for(int p = start;p < i;p++)
           {
               ret.push_back(s[start + i - 1 - p]);
           }
           while (i < len && s[i] == ' ') 
           {
                i++;
                ret.push_back(' ');
           }
       }
       return ret;
    }
};
