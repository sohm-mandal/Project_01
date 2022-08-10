#include <iostream>
using namespace std;

class employee
{
private:
  // Private attribute
  int salary;

public:
  // creating a static member
  // static int time;

  // paramerterised constructor

  // employee(int employee){
  //   this -> salary = salary;
  //   cout<< "Hi" << this<< endl;
  // }

  // Getter
  int getSalary()
  {
    return salary;
  }
  // Setter
  void setSalary(int s)
  {
    salary = s;
  }
  void print()
  {
    cout << "salary: " << this->salary << endl;
  }
  // creating a static member
  // static int random() {
  //     return time ;
  //     }
};

// int employee :: time = 5;

int main()
{
  // cout << employee::random() << endl;

  employee ramesh(100);
  employee suresh(ramesh);
  ramesh.print();
  suresh.print();
  return 0;
}

// creating object //
//   employee myObj;
//   myObj.setSalary(500);
//   cout << myObj.getSalary() << endl;

// dynamically
// employee *a = new employee;
// a->setSalary(800);
// cout<< a->getSalary() <<endl;


//  default constructor
// employee(){
//   cout << "Constructor" <<endl;
//   }

// paramerterised constructor
// employee(int employee){
//   this -> salary = salary;
//   cout<< "Hi" << this<< endl;
// }
// int main() {
//   cout<< "Hi" << endl;
// employee ramesh(100);

//   return 0;
// }
