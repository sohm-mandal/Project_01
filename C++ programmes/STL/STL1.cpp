// The push_back( ) member function inserts value at the end of the vector, expanding its size as needed.
// The size( ) function displays the size of the vector.
// The function begin( ) returns an iterator to the start of the vector.
// The function end( ) returns an iterator to the end of the vector.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // create a vector to store int
    vector<int> vec; // vector<type> name
    int i;

    // display the original size of vec
    cout << "vector size = " << vec.size() << endl;

    // push 5 values into the vector
    for (i = 0; i < 5; i++)
    {
        vec.push_back(i);
    }
    // size of vector after appending the element.  -----> size doesn't matter for vector
    cout << "vector size = " << vec.size() << endl;

    // access 5 values from the vector
    for (int i = 0; i < 5; i++)
    {
        cout << "value of vec [" << i << "] = " << vec[i] << endl;
    }

    // use iterator to access the values
    vector<int>::iterator v = vec.begin();
    while (v != vec.end())
    {
        cout << "value of v = " << *v << endl;
        v++;
    }

    return 0;
}
