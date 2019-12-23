#include"Employee .h"

employee::employee():Person()
{
	this->salary = 0;
}

employee::employee(string name, long id, int age, float salary):Person(name,id,age)
{
	this->salary = salary;
}

employee::employee(employee& other):Person(other.name,other.id,other.age)
{
	this->salary = other.salary;
}

void employee::SetSalary(float salary)
{
	this->salary = salary;
}

void employee::print()
{
	Person::print();
	cout << salary<<endl;
}
