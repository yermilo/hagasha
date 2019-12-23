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

	cout << "enter the number of people to enter: " << endl;
	cin >> size;
	arr = new Person*[size];

	for (int i = 0; i < size; i++) {
		cout << "for the " << i << "person:  " << endl;
		cout << "if the person is an employee enter 1:" << endl;
		cout << "if the person is a student enter 2:" << endl;
		cin >> choice;
			switch (choice)
			{
			case (1):
				cout << "enter employee name,id, age and salary: " << endl;
				cin >> name >> id >> age >> salary;
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


