#include <iostream>
using namespace std;

int main(){
    int num, sum=0;

    do{
        cout << "Input number: " << endl;
        cin >> num;

        if(num>=0){
            sum += num;
        }
    }while(num>=0);

    cout << "Total sum is " << sum; 
}
