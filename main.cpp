#include "edms.h"

int main()
{
    struct emp employees[100];
    
    int  num_emp = 0; // number of employees in the database
    int  choice;      // operation choice

    cout << "******** Welcome to EDMS project ***********\n";
    do {
        cout << "0. Display all employees information\n";
        cout << "1. Add a new employee's record\n";
        cout << "2. Delete an employee's record\n";
        cout << "3. Update an employee's record\n";
        cout << "4. Search an employee's record\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;
        switch (choice)
        {
        case 0:
            displayEmployees(num_emp, employees);
            break;
        case 1:
            addEmployee(num_emp, employees);
            break;
        case 2:
            deleteEmployee(num_emp, employees);
            break;
        case 3:
            updateEmployee(num_emp, employees);
            break;
        case 4:
            searchEmployee(num_emp, employees);
            break;
        default:
            cout << "******* Closing EDMS ************\n";
        }
        cout << endl;
    } while (choice >= 0 && choice <= 4);

    return 0;
}