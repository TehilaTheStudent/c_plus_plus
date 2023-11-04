// c_plus_plus_try1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "student.h"
#include <iostream>
using namespace std;
#include <cmath>;
#include "RationalNumber.h"
void func1() {
	cout << "insert 2 numbers" << endl;
	int int1, int2;
	cin >> int1 >> int2;
	cout << "product: " << int1 * int2 << " " << int1 << " " << int2 << endl;
}
void func2() {
	int int1;
	cout << "insert number" << endl;
	cin >> int1;
	for (int i = 0; i <= sqrt(int1); i++)
	{
		if (int1 % i == 0) {
			cout << i << " ";
		}
	}
}
void func3() {
	int len;

}
void func4(int& a, int& b) {
	a = 4;
	b = 8;
}
int int1[] = { 1,2,4,5,8,5,3,3,565,8 };
int& func5(int i) {
	return int1[i];
}
void studentFunc(student* studArr, int len) {
	int cnt = 0;
	double sum = 0;
	int i = 0;
	while (i < len)
	{
		cnt++;
		sum += studArr[i].getMarksAvg();
		i++;
	}
	double avg = sum / cnt;
	cout << "old avg of " << i << " students: " << avg << endl;
	i = 0;
	while (i < len) {
		if (studArr[i].getMarksAvg() < avg)
			studArr[i].setMarksAvg(studArr[i].getMarksAvg() + 5);
		i++;
	}
	cnt = 0;
	sum = 0;
	i = 0;
	while (i < len)
	{
		cnt++;
		sum += studArr[i].getMarksAvg();
		i++;
	}
	avg = sum / cnt;
	cout << "new avg of " << i << " students: " << avg << endl;
}
int main()
{

	cout << "start: \n" << endl;
#pragma region try
	char char1[5] = { 'l','l','l','l','\0' };//i have yo put the \0, strcpy puts \0 and requires extra place for that?
	RationalNumber rn(6, 12);
	RationalNumber rn2 = rn.reducedRationalNumber();//this wont trigger tilde. but rn.reduced....print()-triggered!
	rn2.printRationalNumber();
	rn.printRationalNumber();
	cout << "equals? " << rn.isEqual(rn2) << endl;
#pragma endregion


#pragma region studentClass
	student student_arr[3];
	char tz[9], first_name[10], last_name[15];
	int grade;
	double marks_avg;

	for (int i = 0; i < 3; i++) {
		cout << "\nplease insert: identity number (9), first name, last name , grade, average mark. \n put spaces between the parameters." << endl;
		cin >> tz >> first_name >> last_name >> grade >> marks_avg;
		student_arr[i] = { tz,first_name,last_name,grade,marks_avg };
		cout << "thank you!" << endl;
		student_arr[i].printStudent();
	}
	studentFunc(student_arr, 3);
#pragma endregion
	cout << "\nend\n";
}


