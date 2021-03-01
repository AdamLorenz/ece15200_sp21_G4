#include <iostream>
using namespace std;
int main()
{
    int choice;

    cout << "********Welcome to EDMS project by Group 6";
    cout << "Press 1 to add new employee's record";
    cout << "Press 2 to delete an employee's record";
    cout << "Press 3 to update an employee's record";
    cout << "Press 4 to search an employee's record";
    cout << "Enter your choice: ";
    cin >> choice;
    
    switch (choice) 
    {
    case 1:
        cout << "Add an employee's record.";
        break;
     
    case 2:
        cout << "Delete an employee's record.";
        break;

    case 3:
        cout << "Update an employee's record.";
        break;

    case 4:
        cout << "Search an employee's record.";
        break;

    default:
        cout << "Invalid choice";
    }

    return 0;
}
