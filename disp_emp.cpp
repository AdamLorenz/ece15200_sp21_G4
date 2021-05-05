#include "edms.h"

/*
	num:    number of employees in the record
	
	struct emp: an employee's information
	struct emp {
		string name; // employee's name
		int empid;   // employee's ID
		string dept; // employee's department
		string doj;  // employee's start date
		int salary;  // employee's salary
	};
*/

void displayEmployees(int num, struct emp employees[]) {
	if (num > 0) {
		cout << left; 
		cout << setw(7) << "ID" << setw(20) << "Employee Name" << setw(15)
			 << "Department" << setw(12) << "Start Date" << setw(7) 
			 << "Salary" << endl;

		for (int i = 0; i < num; i++) {
			cout << setw(7) << employees[i].empid << setw(20) << employees[i].name << setw(15)
				 << employees[i].dept << setw(12) << employees[i].doj << setw(7)
				 << employees[i].salary << endl;
		}
	}
	else {
		cout << "There is no employee information in the record." << endl;
	}
}