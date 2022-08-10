#include<iostream>
using namespace std;

int add (int a, int b){
    return a+b;
}

int add (int a , int b, int c){
    return a+b+c;
}

int main(){
    cout << add(5,9) << endl;
    cout << add(8,9,6) << endl;
    return 0;
}