#pragma once
#include"person.h"
#ifndef S_H
#define S_H

class student :public Person {
protected:
	int average;
	string institute;
public:
	student();
	student(string name, long id, int age, int average, string institute);
	student(student& other);
	void SetAerage(int average);
	void setInstitute(string institute);
	void print();
};
#endif
