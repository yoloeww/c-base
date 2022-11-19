class Solution 
{
public:
    int StrToInt(string str)
   {
       int flag = 1;
       size_t sum = 0;
       for(int i = 0;i < str.size(); i++)
       {
           if(str[i] == '+' || str[i] == '-')
           {
               flag = str[0] == '+' ? flag : - flag;
               continue;
           }
           else if(!(str[i] >= '0' && str[i] <= '9'))
           {
            return 0;
           }
           sum = sum * 10 + str[i] - '0';
       }
       return sum * flag;
   }
};
