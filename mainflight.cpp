#include <iostream>

using namespace std;

int main()
{
int priceSeat, userChoice, pax, totalPrice, jumpOption;
string destination, customerLevel;
char continueBook;
double discount = 0.0;

do {
cout << "Welcome to Florenod Flight Booking!!\n"
<< "Select your flight seat class:\n"
<< "1. Economy for PHP 5,000\n"
<< "2. Business for PHP 10,000\n"
<< "3. First class for PHP 15,000\n";
cin >> userChoice;
switch (userChoice) {
case 1:
priceSeat = 5000;
cout << "You have selected Economy class for PHP 5,000\n";
break;
case 2:
priceSeat = 10000;
cout << "You have selected Business class for PHP 10,000\n ";
break;
case 3:
priceSeat = 15000;
cout << "You have selected First class for PHP 15,000\n ";
break;
default:
cout << "Invalid input. \n";
continue;


}
cout << "Please select your destination: \n"
<< "1 - Binangonan \n"
<< "2 - Cebu \n"
<< "3 - Manila\n ";
cin >> userChoice;

switch (userChoice) {
case 1:
destination = "Binangonan ";
break;
case 2:
destination = "Cebu ";
break;
case 3:
destination = "Manila ";
break;
cout << "Invalid destination \n";
continue;
}
cout << "How many passengers are traveling? ";
cin >> pax;

while (pax < 0) {
cout << "Invalid number of passenegrs. ENter a positive number: ";
cin >> pax;

}

cout << "Select jump option for flight 1 to 3: ";
cin >> jumpOption;

while (jumpOption < 1 || jumpOption > 3) {
cout << "Invalid jump option. Select between 1 and 3: ";
cin >> jumpOption;
}
cout << "Please select your customer level:\n"
<< "1. Standard\n"
<< "2. Loyal with 10 percent discount\n"
<< "3. VIP with 15% discount\n";
cin >> userChoice;

switch (userChoice) {
case 1:
customerLevel = "Standard";
break;
case 2:
customerLevel = "Loyal";
discount = 0.10;
break;
case 3:
customerLevel = "VIP";
discount = 0.15;
break;
default:
cout << "Invalid customer level. \n";
}





totalPrice = priceSeat * pax;
totalPrice -= totalPrice * discount;
cout << "The total price for " << pax << " passengers to " << destination << " with " << customerLevel << " level is PHP " << totalPrice <<endl;

cout << "Thank You have a safe Flight\n";

cout << "Do you want to try and Book again? (y/n): ";
cin >> continueBook;

} while (continueBook == 'Y' || continueBook == 'y');

cout << "Thank youu for using the Florendo Flight Booking\n";
return 0;




}