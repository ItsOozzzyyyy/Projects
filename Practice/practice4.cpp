#include <iostream>
using namespace std;

int main()
{
    int pieces;
    int paper;
    int value;
    double discount;

    cout << "Welcome to Printing Package!!\n"
         << "Here are the packages for our printing:\n"
         << "1. Large package(100) with 15 percent discount\n" 
         << "2. Medium package(50) with 6 percent discount is applied\n" 
         << "3. Bundle package(10) with a 10 percent discount\n"
         << "--------------------------------------------------------------------------------------------------------------------\n" 
        
         << "Here are types of paper we will avail to you:\n"
         << "1. Paper for 5 pesos\n" 
         << "2. Photo paper for 15 pesos\n" 
         << "3. Special paper for 10 pesos\n"
         << "--------------------------------------------------------------------------------------------------------------------\n" 
         
         << "How many will you print today?  " << endl;
    cin  >> pieces;
     
    if (pieces >= 100)
    {
        cout << "So the package that you picked is a large package(100) with 15 percent discount\n";
    }
    else if (pieces >= 50)
    {
        cout << "So the package that you picked is a medium package(50) with 6 percent discount\n";
    }
    else if (pieces >= 10)
    {
        cout << "So the package that you picked is a bundle package(10) with a 10 percent discount\n";
    }

    cout << "--------------------------------------------------------------------------------------------------------------------\n" 
         << "What type of paper will you avail? (Input 1 for Paper, Input 2 for Photopaper, Input 3 for Special paper)\n";
    cin  >> paper;
    
    if (paper == 1)
    {
        cout << "You have picked paper 5 pesos each\n";
    }
    else if (paper == 2)
    {
        cout << "You have picked photopaper 15 pesos each\n";
    }
    else if (paper == 3)
    {
        cout << "You have picked special paper 10 pesos each\n";
    }
    else 
    {
        system("clear");
    }

    cout << "You picked " << paper << " with " << pieces << " pieces\n"; 

    if (paper == 3)
    {
        value = pieces * 10;
    }
    else if (paper == 2)
    {
        value = pieces * 15;
    }
    else if (paper == 1)
    {
        value = pieces * 5;
    }

    cout << "Your total value is " << value << " PHP\n";
    
    // Correcting discount logic
    if (pieces >= 100)
    {
        discount = value - (15 * value / 100); // Large package with 15% discount
    }
    else if (pieces >= 50)
    {
        discount = value - (6 * value / 100); // Medium package with 6% discount
    }
    else if (pieces >= 10)
    {
        discount = value - (10 * value / 100); // Bundle package with 10% discount
    }

    cout << "--------------------------------------------------------------------------------------------------------------------\n" 
         << "The discounted price is " << discount << " PHP\n" 
         << "Thank You!!\n"
         << "\n"
         << "\n"
         << "\n"
         << "\n"
         << "\n";

    return 0;
}

    
