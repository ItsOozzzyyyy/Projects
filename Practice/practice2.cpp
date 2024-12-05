#include <iostream>
using namespace std;

int main()
{
    int stud1, stud2, stud3;

    cout << "Input grade for student 1: " << endl;
    cin >> stud1;
  
    cout << "Input grade for student 2: " << endl;
    cin >> stud2;
  
    cout << "Input grade for student 3: " << endl;
    cin >> stud3;
 
    // Use if-else to determine the order
    if (stud1 >= stud2 && stud1 >= stud3) 
    {
        // stud1 is the highest
        if (stud2 >= stud3) 
        {
            cout << "First " << stud1 << "\n"
                 << "Second " << stud2 << "\n"
                 << "Third " << stud3 << endl;
        } 
        else 
        {
            cout << "First " << stud1 << "\n"
                 << "Second " << stud3 << "\n"
                 << "Third " << stud2 << endl;
        }
    }
    else if (stud2 >= stud1 && stud2 >= stud3) 
    {
        // stud2 is the highest
        if (stud1 >= stud3) 
        {
            cout << "First " << stud2 << "\n"
                 << "Second " << stud1 << "\n"
                 << "Third " << stud3 << endl;
        } 
        else 
        {
            cout << "First " << stud2 << "\n"
                 << "Second " << stud3 << "\n"
                 << "Third " << stud1 << endl;
        }
    }
        else 
    {
        // stud3 is the highest
        if (stud1 >= stud2) 
        {
            cout << "First " << stud3 << "\n"
                 << "Second " << stud1 << "\n"
                 << "Third " << stud2 << endl;
        } 
        else 
        {
            cout << "First " << stud3 << "\n"
                 << "Second " << stud2 << "\n"
                 << "Third " << stud1 << endl;
        }
    }

    return 0;
}
