#include <iostream>
using namespace std;

int main() 
{
    string str;
    while (getline(cin,str))
    {
         size_t pos = str.rfind(' ');
         cout << str.size() - pos - 1 << endl;
    }
    return 0;
}
// 64 位输出请用 printf("%lld")
