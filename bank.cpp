# include "bank.h"
using namespace std;

int Bank::GetMoney(int money)
    {
        _money -= money;
        return _money;
    }
void Bank::Print()
    { 
        cout << " " << _num << " "<< _name  << " "<<  _money <<" "<< endl; 
    }
int Bank::ResMoney(int money)
    {
         _money += money;
         return _money;
    }
int main()
{
    Bank person;
    person.ResMoney(2000);
    person.Print();
    return 0;
}
