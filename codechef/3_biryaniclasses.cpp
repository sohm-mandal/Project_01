#include <iostream>
using namespace std;

int main()
{
    int num, a, b, c;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> a >> b;
        cout << a*b;
    }
    return 0;
}