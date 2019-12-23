#include "WorkingStudent.h"

workingStudent::workingStudent() :employee(), student()
{
	this->same_institute = false;
}

workingStudent::workingStudent(string name, long id, int age, int average, string institute, float salary, bool same_institute) : employee(name, id, age, salary), student(name, id, age, average, institute)
{
	this->same_institute = same_institute;
}

workingStudent::workingStudent(workingStudent& other)
{
	this->same_institute = other.same_institute;
}

