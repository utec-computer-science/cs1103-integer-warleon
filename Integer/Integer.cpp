#include "Integer.h"

Integer::Integer():mynum_{}{}
Integer::Integer(int num):mynum_{num}{}
Integer::Integer(const Integer& num):mynum_{num.mynum_}{}


Integer Integer::operator+(int a){
	Integer res(mynum_ + a);
	return res;
}

void Integer::operator+=(int adder){mynum_+=adder;}

void Integer::operator=(int num){mynum_=num;}
	
Integer Integer::operator-(int a){
	Integer res(mynum_-a);
	return res;
}

void Integer::operator-=(int sus){mynum_-=sus;}


Integer Integer::operator*(int a){
	Integer res(a * mynum_);
	return res;
}

void Integer::operator*=(int mul){mynum_*=mul;}

Integer Integer::operator/(int a){
	Integer res(mynum_ / a);
	return res;
}

//stand by 
int Integer::operator^(int b){
	if(b==0) return 1;
	int y;

	if(b>0){
		if(b%2==0){
		y=(*this)^(b/2);
		return y*y;
		}
		else{
		y=(*this)^(b-1);
		return getMyNum((*this)*y);
		}
	}
	if(b<0){
		y=(*this)^(-b);
		return 1/y;
	}
}

bool Integer::isMultOf(int a){return mynum_%a == 0;}

Integer Integer::operator-(){return -1*mynum_;}

bool Integer::operator>(int a){return mynum_>a;}
bool Integer::operator<(int a){return mynum_<a;}
bool Integer::operator<=(int a){return mynum_<=a;}
bool Integer::operator>=(int a){return mynum_>=a;}
bool Integer::operator!=(int a){return mynum_!=a;}
bool Integer::operator==(int a){return mynum_==a;}
int Integer::getMyNum(const Integer& num){return num.mynum_;}

std::ostream operator<<(const std::ostream& os, const Integer& num){
	os<<num.mynum_;
	return os;
}
