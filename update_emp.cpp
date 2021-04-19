#include "edms.h"

/*
 num:    number of employees in the record
 name:   array contains employees' names
 empid:  array contains employees' IDs
 dept:   array contains employees' departments
 doj:    array contains employees' start date
 salary: array contains employess' annual salary
*/

void updateEmployee(int num, string name[], int empid[],
	string dept[], string doj[], int salary[]) 
{
		{
			int eid;

			if (num > 1) {

				string newDept;

				int newSalary = 0;

				cout << "\n Enter employee ID: "
					cin >> eid;

				//Find if the given employee with eid exists

				for (int i = 0; i < num; ) {
					if (empid[i] == eid)
						break;
					i++;
				}

				if (i == num) {
					cout << "no employee exists with given empid ";

					return;
				}

				cout << "\n Enter new department: "

					cin >> newDept;

				cout << "\n Enter new salary: "

					cin >> newSalary;

				//Update the records for the given employee

				if (!newDept.empty()) {

					dept[i] = newDept;

				}

				if (!newSalary) {

					salary[i] = newSalary;

				}

			}
			else {

				cout << " There is no employee information on record ." << endl;

			}

		}

	
	else 
	{
		cout << "There is no employee information in the record." << endl;
	}
}
