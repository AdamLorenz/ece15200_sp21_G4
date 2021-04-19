#include "edms.h"

/*
 num:    number of employees in the record
 name:   array contains employees' names
 empid:  array contains employees' IDs
 dept:   array contains employees' departments
 doj:    array contains employees' start date
 salary: array contains employess' annual salary
*/

void addEmployee(int &num, string name[], int empid[], 
	string dept[], string doj[], int salary[]) {
	
	int id, loc = num;

	cout << "Enter employee ID: ";
	cin >> id;
	
	if(num >= 100){
		printf("System has reached maximum capacity of employee records.");
		return;
	}

	while(id > 99999 || id < 10000){
		printf("ID number is outside of acceptable range of 10000 - 99999. Please try again: ");
		cin >> id;
	}

	if (num >= 1) {
		for (int i = 0; i < num; i++) {
			if (id < empid[i]) {
				loc = i;
				break;
			}				
		}

		for (int i = num - 1; i >= loc; i--) {
			name[i + 1] = name[i];
			empid[i + 1] = empid[i];
			dept[i + 1] = dept[i];
			doj[i + 1] = doj[i];
			salary[i + 1] = salary[i];
		}
	}

	empid[loc] = id;
	
	cout << "Enter employee's name: ";
	cin.ignore();
	getline(cin, name[loc]);

	cout << "Enter employee's department: ";
	getline(cin, dept[loc]);

	string departments[] = {"Marketing", "Finance", "Human Resources", "Technical"};

	int flag = 0;
	while(flag == 0){
		for(int i = 0; i < 4; i++){
			if(dept[loc].compare(departments[i]) == 0){
				flag = 1;
				break;
			}
		}
		if(flag == 0){
			printf("Your entry does not match any existing department. Please try again: ");
			getline(cin, dept[loc]);
		}
	}

	cout << "Enter employee's start date: ";
	cin >> doj[loc];
	
	int check = 1;
	while(check == 1){
		check = 0;
		string temp_m, temp_d, temp_y;
		string entry = doj[loc];
		if(entry.length() != 10){
			check = 1;
		}else{
			temp_m = entry.substr(0,2);
			//cout << temp_m << endl;
			temp_d = entry.substr(3,2);
			//cout << temp_d << endl;
			temp_y = entry.substr(6,4);
			//cout << temp_y<< endl;
		}
		if(entry[2] != '/' || entry[5] != '/'){
			check = 1;
		}
		else if(stoi(temp_m) < 1 || stoi(temp_m) >+ 12){
			check = 1;
		}
		else if(stoi(temp_d) >= 32 || stoi(temp_d) < 1){
			check = 1;
		}
		if(check == 1){
			printf("Your entry does not match the required date format. i.e. (xx/xx/xxxx). Please try again: ");
			cin >> doj[loc];
		}
	}

	cout << "Enter employee's annual salary: ";
	cin >> salary[loc];

	while(salary[loc] > 200000 || salary[loc] < 30000){
		printf("\n%i does not fall in the acceptable range of 30,000 - 200,000. Please try again: ", salary[loc]);
		cin >> salary[loc];
	}
	num = num + 1;
}