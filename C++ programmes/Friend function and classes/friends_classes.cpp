#include <iostream>
using namespace std;
// forward declaration to use a class which u havent defined yet
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumReal(complex o1, complex o2);
};

class complex
{
    int a, b;
    friend int calculator ::sumReal(complex, complex);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << a << "+" << b << "i" << endl;
    }
};

int main()
{
    complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    calculator calc;
    int res = calc.sumReal(o1, o2);
    return 0;
}