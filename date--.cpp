#include <iostream>
using namespace std;

int main() 
{
    int year , month , day, sum = 0;
    int Date[13] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
    cin >> year >> month >> day;
    sum = Date[month-1] + day;
    // 注意 while 处理多个 case
        if(month > 2 && ((year % 4 == 0 && year % 100 != 0)|| (year % 400 == 0)))
        sum = sum + 1;
        cout << sum << endl;
    
}
// 64 位输出请用 printf("%lld")
