#include <iostream>
using namespace std;
class Date
{
  public:
    Date(int year,int month,int day)
    {
        int _year = year;
        int _month = month;
        int _day = day;
    }
   bool isLeapYear(int year)
   {
    if((year%4==0 && year%100!=0)|| year%400==0)
    {
        return true;
    }
    else
    {
        return false;
    }
    }
    int GetMonthDay(int year,int month)
    {
    int MonthDayArr[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
       if(month==2 && isLeapYear(year))
       {
        return 29;
       }
       else
       {
        return MonthDayArr[month];
       }
    }
    void GetPrint()
    {
        while(this->_day > this->GetMonthDay(this->_year, this->_month))
       {
          this->_day-=this->GetMonthDay(this->_year, this->_month);
          this->_month++;
       }
       cout << this->_year << this->_month << this->_day << endl;
    }
  private:
    int _year;
    int _month;
    int _day;

};
int main() 
{
    
    int year=0;
    int month=1;
    int day=0;
    cin>>year>>day;
    Date a(year,month,day);
    a.GetPrint();
    return 0;
}
// 64 位输出请用 printf("%lld")
