#include <iostream>
using namespace std;
class Demo
{
private:
   int num1, num2;

public:
   Demo(int n1, int n2)
   {
      cout << "Inside Constructor" << endl;
      num1 = n1;
      num2 = n2;
   }
   ~Demo()
   {
      cout << "Inside Destructor";
   }
   void display()
   {
      cout << "num1 = " << num1 << endl;
      cout << "num2 = " << num2 << endl;
   }
};
int main()
{
   Demo obj1(10, 20);
   obj1.display();
   return 0;
}