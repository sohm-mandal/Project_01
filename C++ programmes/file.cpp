// CPP code for demonstrating
// string::compare (const string& str) const

#include <iostream>
#include <string>
using namespace std;

int compareOperation(string s1, string s2)
{

    if ((s1.compare(s2)) < 0)
        cout << s1 << " is smaller than " << s2 << endl;

    if ((s1.compare(s1)) == 0)
        cout << s1 << " is equal to " << s1 << endl;
    else
        cout << "Strings didn't match ";
}

int main()
{
    string s1("Geeks");
    string s2("forGeeks");
    compareOperation(s1, s2);

    return 0;
}
