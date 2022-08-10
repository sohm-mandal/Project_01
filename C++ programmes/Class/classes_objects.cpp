#include <iostream>
using namespace std;

class book
{
public:
    string title;
    string author;
    int pages;

}; // this is the class, its the specification

int main()
{
    book book1;
    book1.title = "harry potter";
    book1.author = "jk rowling";
    book1.pages = 500;

    cout << book1.title << endl;

    return 0; 

// book1 is the object which is made of the class
// to import the required things in the object, use ".(name)" as the command
}
