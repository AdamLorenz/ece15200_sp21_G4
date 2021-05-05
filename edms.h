#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
using namespace std;

/*
 num:    number of employees in the record
 struct emp: an employee's information
*/

struct emp{
	string name; // employee's name
	int empid;   // employee's ID
	string dept; // employee's department
	string doj;  // employee's start date
	int salary;  // employee's salary
} ;

void displayEmployees(int num, struct emp []);

void addEmployee(int &num, struct emp []);

void deleteEmployee(int &num, struct emp []);

void updateEmployee(int num, struct emp []);

void searchEmployee(int num, struct emp []);