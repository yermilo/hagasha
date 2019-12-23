#include"person.h"
#include"student.h"
#include "employee.h"
#include"WorkingStudent.h"
#include<iostream>
using namespace std;

int main() {
	
	int size, choice, age, avarage,work;
	long id;
	float salary;
	string name, institute;

	cout << "enter the number of people to enter: " << endl;
	cin >> size;
	Person **arr = new Person*[size];
	bool same_inst;
	for (int i = 0; i < size; i++) {
		cout << "for the " << i+1 << " person:  " << endl;
		cout << "if the person is an employee enter 1, and if he a student enter 2:" << endl;
		cin >> choice;
	
		switch (choice)
		{
		case (1):
			cout << "enter employee name,id, age and salary: " << endl;
			cin >> name >> id >> age >> salary;
			arr[i] = new employee(name, id, age, salary);
			break;
		case (2):
			cout << "enter student name ,id ,age,avarage,institute " << endl;
			cin >> name >> id >> age >> avarage, institute;
				arr[i] = new student(name, id, age, avarage, institute);

			break;
		}
	
	}

	for (int i = 0; i < size; i++) {
		arr[i]->print();
	}

	
	return 0;
}


