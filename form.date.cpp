# include "date.h"
class date:
{
  public:
  //默认构造函数
  date(int year = 1000,int month = 3,int day = 20) 
  {
    if(year < 1990 || month < 1|| month >12 || day < 1 || day > GetMonthDay(year,month))
    {
      cout << "非法日期" << endl;
    }
    _year = year;
    _month = month;
    _day = day;
  }
  int GetMonthDay(int year, int month)
  {
     int days[13] = {0,31,28,31,30,31,31,30,31,30,31};
     int day = days[month];
     if(month == 2 &&(year % 4 == 0&&year % 100 != 0)||year % 400 == 0)
     {
      day = day+1;
     }
     return day;
  }
  //拷贝构造函数
  d2(d1);
  Date(const Date &d)
  {
    this -> _year = d._year;
    _month = d._month;
    _day = d._day;
  }
  d2 = d3 -> d2.operator = (&d2,d3);
  //date & operator = (date *this, const date &d)
  date & operator = (const date &d)
  {
    if(this != &d)
    {
      this -> _year = d._year;
      this -> _month = d._month;
      this -> _day = d._day;
    }
    return *this;
  }
  ~date()
  {

  }
  void print()
  {
    cout << _year << "-" << _month << "-" << _day << endl;
  }
  date & operator += (int day)
  {
     if(day < 0)
     {
      return *this -= -day;
     }
     _day += day;
     while(_day > GetMonthDay(_year,_month))
     {
        _day -= GetMonthDay(_year,_month);
        _month++;
        if(_month == 13)
        {
          _year++;
          _month = 1;
        }
        return *this;
     }
  }
  date & operator + (int day)
  {
     date ret (*this);
     ret + = day;
     return ret;
  }
  date & operator - (int day)
  {
      date ret (*this);
      ret - = day;
      ruturn ret;
  }
  date &operator -= (int day)
  {
       if( day < 0)
       {
          return *this += -day;
       }
       _day -= day;
       while(_day <= 0)
       {
          --_month;
          if (_month == 0)
          {
              --_year;
              _month = 12;
          }
          _day += GetMonthDay(_year,_month);
          return *this;
       }
  }
  date operator ++()
  {
    *this -= 1;
    return *this;
  }
  date operator ++(int )
  {
    Date ret(*this);
    *this -= 1;
    returh ret;
  }
  date operator --()
  {
    *this += 1;
    return *this;
  }
  date operator --(int )
  {
    Date ret(*this);
    *this += 1;
    returh ret;
  }
  date operator > (const date &d)
  {
     if(_year > d._year)
     return true;
     else if( _year == d._year)
     {
       if(_month > d._month)
       {
        return true;
       }
       else if(_month == d._month)
       {
       if(_day > d._day)
       return true;
       }
     }
     }
     return false;
  }
bool operator == (const date &d)
{
   return _year == d._year &&
   _month == d._month &&
   _day == d._day;
}
bool operator >= (const date &d)
{
   return *this > d || *this == d;
}
bool operator <= (const date &d)
{
   return !(*this > d);
}
bool operator != (const Date& d)
{
return !(*this == d);
}
int operator-(const date &d )
{
   int flag = 1;
   date max = *this;
   date min = d;
   if( *this < d)
   {
       max = d;
       min = *this;
       flag  = -1;
   }
   int day = 0;
   while (min < max)
   {
    /* code */
    ++(min);
    ++day;
   }
   return day*flag;
}
  private:
   int _year;
   int _month;
   int _day;
};
