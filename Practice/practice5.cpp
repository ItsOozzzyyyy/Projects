#include <iostream>  

using namespace std;   

 

int main() 

{ 
int num;

 cout << "Enter a number: " << endl;
 cin >> num;

 if(num>=1){
    cout << "\nIt is a postive number" << endl;
    if(num<=9){
        cout << "Your number has 1 digit" << endl; 
    }
    else if(num<=99){
        cout << "Your number has 2 digits" << endl;
    }    
        else if(num<=999){
            cout << "Your number has 3 digits" << endl;
        }
        else{
            cout << "Your number has 4 digits" << endl;
        }
    }
 else if(num<0){
    cout << "It is a non-positive number" << endl;
    num = -num;
    if(num<=9){
        cout << "Your number has 1 digit" << endl;
    }
    else if(num<=99){
        cout << "Your number has 2 digits" << endl;
    }
    else if(num<=999){
            cout << "Your number has 3 digits" << endl;
        }
        else{
            cout << "Your number has 4 digits" << endl;
        }
    }

return 0;

 }



 


