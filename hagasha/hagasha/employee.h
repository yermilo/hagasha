#include "person.h"
#ifndef E_H
#define E_H

class employee :public Person {
protected:
	float salary;
public:
	employee();
	employee(string name, long id, int age, float salary);
	employee(employee&other);
	void SetSalary(float salary);
	void print();

};
#endif
