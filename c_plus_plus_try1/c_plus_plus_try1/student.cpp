#include "student.h"
#include <iostream>
#include <string.h>
student::student() {}
student::student(char* tz, char* first_name, char* last_name, int grade, double marks_avg) :grade(grade), marks_avg(marks_avg) {
	strcpy_s(this->tz, tz);
	strcpy_s(this->first_name, first_name);
	strcpy_s(this->last_name, last_name);
	//i had to save 1 place empty like char[9] got only 8 chrs in strcpy

}
	void student::printStudent() {
		cout << tz << " " << first_name << " " << last_name << " " << grade << " " <<  marks_avg << endl;
}


