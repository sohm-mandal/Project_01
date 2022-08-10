#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int k, n, f;
        cin >> n >> k;
        if (k == 0 && n % 4 == 0)
        {
            cout << "Off" << endl;
        }
        else if (k == 0 && (n + k) % 4 != 0)
        {
            cout << "On" << endl;
        }
        else if (k == 1 && n % 4 == 0)
        {
            cout << "On" << endl;
        }
        else 
        {
            cout << "Ambiguous" << endl;
        }
    }
    return 0;
}
