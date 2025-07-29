#include<iostream>
using namespace std;

class maths
{
    private:
    int var1;

    protected:
    int var2;

    public:
    friend void add(maths& obj);
};

void add(maths& obj)
{
    cout << "Enter two number\n";
    cin >> obj.var1 >> obj.var2;

    cout << obj.var1 + obj.var2 << endl;

}

int main()
{
    maths m;
    add(m);

}