#include"Employee .h"
#include"person.h"
#include"student.h"
#include"WorkingStudent.h"
#include<iostream>
#include<typeinfo>
using namespace std;

void PrintArr(Person ** arr,int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "===Person Number " << i + 1 << "====" << endl;
		if (typeid(*arr[i]) == typeid(student))
		{
			cout << "Type: Student" << endl;
		}
		if (typeid(*arr[i]) == typeid(employee))
		{
			cout << "Type: Employee" << endl;
		}
		arr[i]->print();
		//arr[i]->print();
	}
}

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
				while (age <= 0)
				{
					cout << "Error- Age Illigal!!\nTry Again!\nEnter Age: ";
					cin >> age;
				}
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
				while (age <= 0)
				{
					cout << "Error- Age Illigal!!" << endl << "Try Again!\nEnter Age: ";
					cin >> age;
				}
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
	PrintArr(arr, size);

	
	return 0;
}


