# include <algorithm>
# include <iostream>
using namespace std;
void show(int hours,int minutes)
{
    cout << "Enter the number of hours :"<< hours << endl;
    cout << "Enter the number of minutes :"<< minutes << endl;
    cout << "Time : " << hours << " : " << minutes << endl;
}
int main()
{
    /*
    cout << "hello world" <<endl;
    int cheeses = 9;
    cout << cheeses << endl;
    cin  >> cheeses; //从键盘读入数据给cheeses;
    cout << cheeses << endl;
    */
    int hours = 0,minutes = 0;
    cin >> hours;
    cin >> minutes;
    show(hours,minutes);
    return 0;
}
