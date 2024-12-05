#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age;
    string usern;
    char letterchoice;

    cout << " Welcome!!\n"
         << "Whats your name?\n";
    cin >> usern;
    cout << "Whats " << usern << "'s age?\n";
    cin >> age;
if(age>=3)
{
    cout << "You are allowed \n";
}
else
{
    cout << "you are not allowed\n";
    system ("pause");
    return 0;
}
    if(20<=age )
    {
cout << " You are a college student";
    }
    else if(18<=age)
    {
cout << " You are a senior highschool student";
    }
else if(15<=age)
    {
cout << " You are a Junior highschool student";
    }
else if(12<=age)
    {
cout << " You are an elementary student";
    }
cout << "Whats your favorite letter? ";
cin >> letterchoice;

switch (letterchoice)
{
case 'a':
    cout << "A is for apple \n";
    break;
case 'b':
    cout << "B is for ball \n";
    break;
case 'c':
    cout << "C is for cat \n";
    break;
default:
    cout << "Not recognized \n";
    break;
}
}
