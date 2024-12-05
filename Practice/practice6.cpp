#include <iostream>
using namespace std;

int main()
{
char op;
float num1, num2, sum, difference, product, quotient;

cout << "Enter first number: " << endl;
cin >> num1;

cout << "Enter second number: " << endl;
cin >> num2;

cout << "Select an operator(+, -, *, /): " << endl;
cin >> op;

switch(op){
case '+':
    sum=num1+num2;
    cout << num1 << " plus " << num2 << " equals " << sum << endl;
    break;
case '-':
    difference=num1-num2;
    cout << num1 << " minus " << num2 << " equals " << difference << endl;
    break;
case '*':
    product=num1*num2;
    cout << num1 << " multiplied " << num2 << " equals " << product << endl;
    break;
case '/':
    quotient=num1/num2;
    if(num2==0){
        cout << "Undefined ";
    }
    else{
    cout << num1 << " divided " << num2 << " equals " << quotient << endl;
    }
    break;
    default:
    cout << "Error Invalid operator inputted." << endl;
    break;
}
return 0;
}
    

