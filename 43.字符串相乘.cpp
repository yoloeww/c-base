class Solution {
public:
    string multiply(string num1, string num2) 
    {
         vector <int> array1,array2; //首先定义两个数组
         int i = 0;
         int len1 = num1.size(),len2 = num2.size();//计算字符串长度
         for(i = len1 - 1;i >= 0;i--)
         array1.push_back(num1[i] - '0');//把字符串变成数尾插【1，2，3】
         for(i = len2 - 1;i >= 0;i--)
         array2.push_back(num2[i] - '0');//【4，5，6】
         vector <int> array3(len1 + len2);
          for (int i = 0; i < len1; i ++ )
          {
            for (int j = 0; j < len2; j ++ )
            {
                array3[i + j] += array1[i] * array2[j];
            }
          }
        int t = 0;  //存贮进位
        for (int i = 0; i < array3.size(); i ++)
        {
            t += array3[i];  //满十进一
            array3[i] = t % 10;
            t /= 10;
        }
        int k = array3.size() - 1;
        while (k > 0 && !array3[k])
        k --;//去除前导0
        string res;
        while (k >= 0) res += array3[k -- ] + '0';  //反转
        return res;
    }
};
