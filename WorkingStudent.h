#ifndef WorkingStudent_h
#define WorkingStudent_h
#include"Employee .h"
#include"student.h"

class workingStudent :employee, student {
		private:
			bool same_institute;
		
		public:
			workingStudent();
			workingStudent(string name, long id, int age, int average, string institute, float salary,bool same_institute);
			workingStudent(workingStudent&other);
};
#endif