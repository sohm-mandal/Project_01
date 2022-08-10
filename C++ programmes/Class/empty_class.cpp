#include <iostream>
#include <string.h>
using namespace std;

class hero
{
private:
    int health;

public:
    // properties
    string level;

    void print()
    {
        cout << level << endl;
    }

    int getHealth()
    {
        return health;
    }

    string getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }
};

int main()
{
    // we will create an object
    hero alom;
    cout << "ramesh health is" << alom.getHealth() << endl;

    alom.setHealth(70);
    alom.setLevel(A);

    cout << "health is: " << alom.setHealth << endl;
    cout << "level is: " << alom.setLevel << endl;

    return 0;
}