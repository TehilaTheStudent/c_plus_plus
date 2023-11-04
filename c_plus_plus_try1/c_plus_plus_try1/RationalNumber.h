#pragma once
class RationalNumber
{
	int* numerator;
	int* denominator;
public:
	RationalNumber();
	RationalNumber(int numerator);
	RationalNumber(int numerator, int denominator);
	~RationalNumber();
	void printRationalNumber();
	RationalNumber reducedRationalNumber();
	int getNumerator() 
	{ return *numerator; }
	int getDenominator()
	{ return *denominator; }
	int setNumerator(int numerator) 
	{ *this->numerator = numerator; }
	int setDenominator(int denominator) 
	{ if(denominator!=0)*this->denominator = denominator; }
	bool isEqual(RationalNumber other);

};

