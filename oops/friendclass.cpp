#include<iostream>
using namespace std;

class student
{
    private:
    int  var1 = 10;

    protected:
    int var2 = 20;

   friend class student1;

};

class student1
{
    public:
    void display(student& obj)
    {
        cout << obj.var1  << endl;
        cout << obj.var2 << endl;

    }
};

int main()
{
    student s;
    student1 s1;

    s1.display(s);

}