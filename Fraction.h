#include <iostream>
using namespace std;

class Fraction
{
	private: // data members
	int numerator;
    int denominator;
	
	public: //function members
	Fraction(); // constructor
    void read();
    void add();
    void sub();
    void mult();
    void divide();
    void simplify();
    void print();
    int getnum();
    int getdenom();
    void setnum();
    void setdenom();
	
	
};