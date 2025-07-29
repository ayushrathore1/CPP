#include<iostream>
using namespace std;

class maths
{
 

   public: 
   void add(int a, int b)
   {
    
    cout << a + b;
    
   }
   
   void add(int a, int b, int c)
   {
    cout <<  a + b + c;
   }
   
};

int main()
{
    maths m;
    m.add(5,8);
    m.add(5,7,3);
    return 0;
}