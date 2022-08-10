#include<iostream>
using namespace std;

class human{
public:

    int age;
    int weight;

int getAge(){
    return age;
}

void setAge(int a){
    age = a;
}

};

class male: public human{

public:
    string color;
    void sleep(){
        cout << "Male sleeping" << endl;
    }
};

int main (){
    male obj1;
    cout<< obj1.age<< endl;
    cout<< obj1.color<< endl;

    return 0;
}