#include "student.h"

student::student() :Person(){
	this->average = 0;
	this->institute = nullptr;
}

student::student(string name, long id, int age, int average, string institute): Person(name,id,age)
{
	this->average = average;
	this->institute = institute;
}

student::student(student& other):Person(other.name,other.id,other.age)
{
	this->average = other.average;
	this->institute = other.institute;
}

void student::SetAerage(int average)
{
	this->average = average;
}

void student::setInstitute(string institute)
{
	this->institute = institute;
}

void student::print()
{
	Person::print();
	cout << "average: " << average << endl;
	cout << "institute: " << institute << endl;
}
