#pragma once
#include <iostream>

class Integer{
	int mynum_;
public:
//constructores
	Integer();
	Integer(int num);
	Integer(const Integer& num);


//operadores basicos
	void operator=(int num);
	void operator+=(int adder);
	Integer operator+(int a);
	Integer operator-(int a);
	Integer operator-();
	void operator-=(int sus);
	Integer operator*(int a);
	void operator*=(int mul);
	Integer operator/(int a);
//potenciacion
	int operator^(int b);
//comparaciones logicas
	bool operator>(int a);
	bool operator<(int a);
	bool operator<=(int a);
	bool operator>=(int a);
	bool operator!=(int a);
	bool operator==(int a);
//my functions
	bool isMultOf(int a);
	int getMyNum(const Integer& num);
//ostream
	friend std::ostream operator<<(const std::ostream& os, const Integer& num);
};
