#include "edms.h"

/*
 num:    number of employees in the record
 name:   array contains employees' names
 empid:  array contains employees' IDs
 dept:   array contains employees' departments
 doj:    array contains employees' start date
 salary: array contains employess' annual salary
*/

void deleteEmployee(int &num, string name[], int empid[],
	string dept[], string doj[], int salary[]) 
{
	int eid;

	if (num > 1) {

		cout << "\n Enter employee ID: "

			cin >> eid;

		for (int i = 0; i < num; i++) {

			if (empid[i] == eid)

				break;

		}

		if (i == num) {
			cout << "no employee exists with given empid ";

			return;
		}

		//Update the records after deleting the given employee

		for (int k = i - 1; i < num; k++) {

			empid[k] = empid[k + 1];

		}

		num = num - 1;

	}
	else {

		cout << " There is no employee information on record ." << endl;

	}

}
