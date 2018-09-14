#include <iostream>
using namespace std;


Fraction:: Fraction()
// preconditon:
// postconditon:
{
    numerator = 0;
    denominator = 1;
}

Fraction:: void read()
// preconditon:
// postconditon:
{
    char op;
    int num, denom;
    
    cin >> num >> denom >> op;

    numerator = num;
    denominator = denom;

    cout << " The fraction read is:" << num << "/" << denom << endl;
}

Fraction:: add(fraction f1, fraction f2, fraction f3)
// preconditon:
// postconditon:
{
    
   f3.setNum( (f1.getNum() * f2.getDonom() ) + (f2.getNum() * f1.getDonom() ) );
   f3.setDenom(f1.getDonom() * f2.getDonom()); 
}
 Fraction:: subtract()
 // preconditon:
// postconditon:
 {
    
 }

 Fraction:: multiply()
 // preconditon:
// postconditon:
 {
    
 }

 Fraction:: divide()
 // preconditon:
// postconditon:
 {
    
 }

 Fraction:: void simplify()
 // preconditon:
// postconditon:
 {
    
 }

 Fraction:: void print()
 // preconditon:
// postconditon:
 {
    cout << numerator << "/" << denominator;
 }
 Fraction:: int getNum()
 // preconditon:
// postconditon:
 {
    return numerator;
 }
 Fraction:: int getDenom()
 // preconditon:
// postconditon:
 {
    return denominator
 }
 Fraction:: void setNum(int num)
 // preconditon:
// postconditon:
 {
    numerator = num;
 }
 Fraction:: void setDenom(int denom)
 // preconditon:
// postconditon:
 {
    denominator = denom;
 }