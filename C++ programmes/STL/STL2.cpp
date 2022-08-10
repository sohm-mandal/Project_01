#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;
int main()
{
    vector<int> v{1, 2, 3, 4};
    int n1 = 3;
    int n2 = 5;
    auto is_even = [](int i)
    { return i % 2 == 0; };

    auto result1 = find(begin(v), end(v), n1);
    auto result2 = find(begin(v), end(v), n2);
    auto result3 = find_if(begin(v), end(v), is_even);

    (result1 != end(v))
        ? cout << "v contains " << n1 << '\n'
        : cout << "v does not contain " << n1 << '\n';

    (result2 != end(v))
        ? cout << "v contains " << n2 << '\n'
        : cout << "v does not contain " << n2 << '\n';

    (result3 != end(v))
        ? cout << "v contains an even number: " << *result3 << '\n'
        : cout << "v does not contain even numbers\n";
}
