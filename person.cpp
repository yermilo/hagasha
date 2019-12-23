#include "person.h"

Person::Person()
{
	this->name = nullptr;
	this->id = 0;
	this->age = 0;
}

Person::Person(string name, long id, int age)
{
	this->age = age;
	this->id = id;
	this->name = name;
}

Person::Person(Person& other)
{
	this->name = other.name;
	this->age = other.age;
	this->id = other.id;
}

void Person::SetName(string name)
{
	this->name = name;
}

void Person::SetId(long id)
{
	this->id = id;
}

void Person::SetAge(int age)
{
	this->age = age;
}

void Person::print()
{
	cout << name << endl;
	cout << id << endl;
	cout << age << endl;
}
