#include<iostream>
using namespace std;

class one
{
    private:
    float r;

    public:
    void area(float r)
    {
        this -> r = r;
        cout << 3.14 * r * r;
    }

};

int main()
{
    float rad;
    one a;

    cout << "Enter a radius";
    cin >> rad;
    a.area(rad);


}