#include <iostream>
#include <math.h>
#define PI 3.141592
using namespace std;

double square(int side){
    return pow(side,2);
}
double rectangle(int length, int width){
    return length*width;
    }
double triangle(int base, int heigth){
    return .5*(base*heigth);
}
double circle(int radius){
    return PI*(pow(radius,2));
}

int main()

{
    int userChoice;
cout << "***************" 
<< "\nMENU\n" 
<< "***************\n" 
<< "[1]- Area of square\n" 
<< "[2]- Area of rectangle\n" 
<< "[3]- Area of triangle\n" 
<< "[4]- Area of circle\n" 
<< "[5]- exit\n"
<< "---------------\n" 
<< "Enter your choice: ";
cin >> userChoice;
cout << "---------------\n";
    switch (userChoice){

    case 1: 
    int side;
        cout << "Area of square" 
             << "\n---------------\n"
             << "Input the area of the square: ";
             cin >> side;
        cout << "The Area of the square is " << square(side) << endl;
        break;
    case 2: 
    int length, width;
        cout << "Area of rectangle" 
             << "\n---------------\n" 
             << "Input the length of the rectangle: " << endl;
             cin >> length;
        cout << "Input the width of the rectangle: " << endl;
             cin >> width;
        cout<< "The area of the rectangle is " << rectangle(length, width)  << endl;
        break;
    case 3: 
    int base, heigth;
        cout << "Area of triangle" 
             << "\n---------------\n" 
             << "Input the base of the triangle: " << endl;
             cin >> base;
        cout   << "Input the heigth of the triangle: " << endl;
             cin >> heigth;
        cout << "The area of the triangle is " << triangle(base, heigth) << endl;

        break;
    case 4: 
    int radius;
        cout << "Area of circle" 
             << "\n---------------\n"
             << "Input the radius of the circle: " << endl;
             cin >> radius;
             cout << "The area of the circle is " << circle(radius) << endl;
        break;
    default: 
    cout << "Thank you";
        exit(0);
    
        
}

return 0;
}