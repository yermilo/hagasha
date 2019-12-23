#include"Employee .h"
#include"person.h"
#include"student.h"
#include"WorkingStudent.h"
#include<iostream>
using namespace std;

int main() {
	Person** arr;
	int size,choice,age,avarage;
	long salary,id;
	string name,institute;

	cout << "Enter the number of people to enter: ";
	cin >> size;
	arr = new Person*[size];

	for (int i = 0; i < size; i++) {
		cout << "For the " << i << " Person:  " << endl;
		cout << "If the person is an employee Enter 1:" << endl;
		cout << "If the person is a student Enter 2:" << endl;
		cin >> choice;
			switch (choice)
			{
			case (1):
				cout << "Enter employee" << endl << "name: <<";
				cin >> name;
				cout << "ID: ";
				cin >> id;
				cout << "age: ";
				cin >> age;
				cout << "salary: ";
				cin >> salary;
				arr[i] = new employee(name,id,age,salary);
				break;
			case (2):
				cout << "enter student name ,id ,age,avarage,institute " << endl;
				cin >> name >> id >> age >> avarage,institute;
				arr[i] = new student(name, id, age, avarage, institute);
				break;
			}
			for (int i = 0; i < size; i++) {
				arr[i]->print;
			}
	}
	return 0;
}


