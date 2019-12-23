#include "employee.h"
#include"student.h"
#ifndef WS_H
#define WS_H

class workingStudent :public employee,public student {
private:
	bool same_institute;

public:
	workingStudent();
	workingStudent(string name, long id, int age, int average, string institute, float salary, bool same_institute);
	workingStudent(workingStudent&other);

};
#endif