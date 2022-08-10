#include <iostream>
using namespace std;

int main()
{
    int num, a, b, c;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> a >> b >> c;
        if (a > b && a > c)
        {
            if (b > c)
                cout<< b;
            else
                cout<< c;
        }
        else if (b > c && b > a)
        {
            if (c > a)
                cout<< c;
            else
                cout<< a;
        }
        else if (a > b)
            cout<< a;
        else
            cout<< b;
    }
    return 0;
}