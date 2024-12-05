#include <iostream>
using namespace std;
 int main()
 {
    int number;

    cout << " Input a number: " << endl;
    cin >> number;

if(number>0)
{
    cout << " The number is postive " << endl;
}
else if(number<0)
{
    cout << " The number is negative " << endl;
}
else if(number==0)
{
    cout << " The number is 0 " << endl;

}
return 0;
 }