// Operator overloading means changing the defination of the operator

#include <iostream>
using namespace std;

class Compare
{

public:
    int x;     // format
    int operator+(Compare &a)   // syntax: int operator operator_sign (class_name &object_name)
    { 
        int ans;
        if (x == a.x)
        {
            ans = x * a.x;
        }

        else
        {
            ans = x - a.x;
        }
        return ans;
    }
};

int operator-(Compare &a, Compare &b)
{
    int x, ans;
    if (a.x == b.x)    // object.class member
    { 
        ans = (a.x) / (b.x);
    }

    else
    {
        ans = (a.x) - (b.x);
    }
    return ans;
}

int main()
{
    Compare c1, c2;
    cin >> c1.x;
    cin >> c2.x;
    cout << c1 + c2 << endl;
    cout << c1 - c2 << endl;
    return 0;
}