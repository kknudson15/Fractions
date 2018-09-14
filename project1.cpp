#include <iostream>
using namespace std;


void prompt();

int main ()
{
    Fraction f1;
    Fraction f2;
    Fraction f3;
    cout << " Enter an arithmetic expression involving two fractions: ";
    f1.read();
    f2.read();

    switch(op)
    {
        case '+': 
        {
            f1.add(f1,f2,f3);
            //f3.simplify();
            f3.print();
        }
        case '-':
        {
            f1.subtract();
            //f3.simplify();
        }
        case '*':
        {
            f1.multiply();
            //f3.simplify();
        }
        case '/': 
        {
            f1.divide();
            //f3.simplify();
        }
        //default:
        //cout << "invalid entry";
    }
    
}
