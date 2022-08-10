#include <iostream>
#include <string.h>
using namespace std;

class Hero
{

private:
    int health;

public:
    char *name;
    char level;
    // Static Keyword- It creates a data member which belongs to class not the object
    static int timeToComplete;

    // Static functions - Can acess only static elements. Does not have this pointer
    static int random()
    { // creating function
        return timeToComplete;
    }

    // Simple constructor (also comes by default)
    Hero()
    {
        name = new char[100];
        cout << "Simple Constructor called" << endl;
    }

    // PARAMATERIZED CONSTRUCTORS
    Hero(int health)
    {
        this->health = health;
    }

    // This pointer is used to enter the above health(line 8) in below one(line 26).

    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }
    // Once a paramaterized constructor is called, default constrtuctor is ended.
    void print()
    {
        cout << endl;
        cout << "[ Health: " << health << ",";
        cout << " Level: " << level << ",";
        cout << " Name: " << this->name << "]";
        cout << endl
             << endl;
    }

    // Cretaing our own copy constructure

    Hero(Hero &temp)
    { // used for call by reference

        // For deep copy
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        // If we dont create the upper array, shallow copy will be done.
        // Hence for deep copy, we have to create a new array.

        this->health = temp.health;
        this->level = temp.level;
    }
    // After creating our copy constructor, default cpoy constructor is ended.

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char l)
    {
        level = l;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    // Destructor -  Used to de-alloate memory. ("~")
    // It is same as Constructor.
    // It is called automatically when the class is called.

    ~Hero()
    {
        cout << "Destructor called" << endl;
    }
};

// Initiliasing static keyword (always at last, outside class and int main)
// datatype, ClassName, ::(Scope reolution operator), field name = Value
int Hero::timeToComplete = 5;

int main()
{

    cout << Hero::timeToComplete << endl;
    cout << Hero::random() << endl;

    // FOR STATIC, destructor is called automatically.
    // Hero a;

    // FOR DYNAMIC, destructor should be called manually.
    // Hero *b= new Hero();
    // delete b;

    // Hero hero1;
    // hero1.setHealth(12);
    // hero1.setLevel('C');
    // char name[10] = "Apoorv";
    // hero1.setName(name);
    // hero1.print();

    // // Using default copy constructor
    //     Hero hero2(hero1);
    //     //hero2.print();

    //     hero1.name[0]='B';
    //     hero1.print();

    //     hero2.print();
    // // Assignment Operator
    //     hero1=hero2;
    //     hero1.print();
    //     hero2.print();

    // //Copy Constructors - These generates automatically
    // Hero R(70 , 'C');
    // R.print();

    // Hero S(R);
    // S.print();

    // //Statically
    // Hero ramesh(10);
    // //cout << "Address of Ramesh " << &ramesh << endl;
    // ramesh.print();

    // //Dynamically
    // Hero *h = new Hero(11);
    // //cout << "Address of Ramesh " << &ramesh << endl;
    // h->print();

    // Hero temp(70,'B');
    // temp.print();
    return 0;
}