#pragma once
#include <iostream>
using namespace std;
class student
{
	char tz[9];
	char first_name[10];
	char last_name[15];
	int grade;
	double marks_avg;
public:
	student();
	student(char *tz, char *first_name, char *last_name, int grade, double marks_avg);
	char* getTz() { return tz; }
	void setTz(char* tz){
		strcpy_s(this->tz, tz);

	}
	char* getFirstName() { return first_name; }
	void setFirstName(char* first_name){
		strcpy_s(this->first_name, first_name);
	}
	char* getLastName() { return last_name; }
	void setLastName(char* last_name){
		strcpy_s(this->last_name, last_name);
	}
	int getGrade() { return grade; }
	void setGrade(int grade) { this->grade=grade; }
	double getMarksAvg() { return marks_avg; }
	void setMarksAvg(double marks_avg) { this->marks_avg = marks_avg; }
	void printStudent();
};

