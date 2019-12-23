#include<iostream>
#include<string>
using namespace std;
#ifndef P_H
#define P_H

class Person {
protected:
	string name;
	long id;
	int age;
public:
	Person();
	Person(string name, long id, int age);
	Person(Person& other);
	void SetName(string name);
	void SetId(long id);
	void SetAge(int age);
	void print();

};
#endif