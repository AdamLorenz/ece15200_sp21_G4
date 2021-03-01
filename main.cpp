#include <iostream>
using namespace std;
int main()
{
    int choice;

    cout << "********Welcome to EDMS project by Group 6\n";
    cout << "Press 1 to add new employee's record\n";
    cout << "Press 2 to delete an employee's record\n";
    cout << "Press 3 to update an employee's record\n";
    cout << "Press 4 to search an employee's record\n";
    cout << "Enter your choice: ";
    cin >> choice;
    
    switch (choice) 
    {
    case 1:
        cout << "Add an employee's record.\n";
        break;
     
    case 2:
        cout << "Delete an employee's record.\n";
        break;

    case 3:
        cout << "Update an employee's record.\n";
        break;

    case 4:
        cout << "Search an employee's record.\n";
        break;

    default:
        cout << "Invalid choice\n";
    }

    return 0;
}
