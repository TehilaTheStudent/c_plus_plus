#include "RationalNumber.h"
#include <iostream>
using namespace std;
RationalNumber::RationalNumber() {};
RationalNumber::RationalNumber(int numerator) { this->numerator = new int; *this->numerator = numerator; };
RationalNumber::RationalNumber(int numerator, int denominator) { this->numerator = new int; *this->numerator = numerator; this->denominator = new int; *this->denominator = denominator; };
RationalNumber::~RationalNumber() {
	cout << "tilde!" << endl;
	if(numerator)
	delete numerator;
	if(denominator)
	delete denominator;
}
void RationalNumber::printRationalNumber() {

	cout << "the Rational Number : " << *numerator <<  "/" << *denominator << endl;
}
RationalNumber RationalNumber::reducedRationalNumber() { 
	for (size_t i = *numerator; i >= 2; i--)
	{
		if (*numerator % i == 0 && *denominator % i == 0) { return  RationalNumber(*numerator / i, *denominator / i); }
	}
	//return RationalNumber(*this->numerator,*this->denominator);
	return *this;
}
bool RationalNumber::isEqual(RationalNumber other) {
	return other.getDenominator() == *denominator && other.getNumerator() == *numerator;
}
