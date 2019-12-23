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
		cout << "For the " << i+1 << " Person:  " << endl;
		cout << "If the person is an employee Enter 1" << endl;
		cout << "If the person is a student Enter 2" << endl << "Choice: ";
		cin >> choice;
			switch (choice)
			{
			case (1):
				cout << "==Enter employee==" << endl << "Enter name: ";
				cin >> name;
				cout << "Enter ID: ";
				cin >> id;
				cout << "Enter age: ";
				cin >> age;
				cout << "Enter salary: ";
				cin >> salary;
				arr[i] = new employee(name,id,age,salary);
				break;
			case (2):
				cout << "==Enter student==" << endl << "Enter Name: ";
				cin >> name;
				cout << "Enter ID: ";
				cin >> id;
				cout << "Enter Age: ";
				cin >> age;
				cout << "Avarage: ";
				cin >> avarage;
				cout << "institute: ";
				cin >> institute;
				arr[i] = new student(name, id, age, avarage, institute);
				break;
			default:
				cout << "Error:Enter Only 1 OR 2!! - Try again" << endl;
				i--;
			}
	}

	for (int i = 0; i < size; i++)
	{
		cout << "===Person Number " << i + 1 << "====" << endl;
		arr[i]->print();
	}
	return 0;
}


