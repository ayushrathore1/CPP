#include<iostream>
using namespace std;

class arithmetic
{
    public:
    float n1,n2;
    void input()
    {
        cout << "Enter two numbers\n";
        cin >> n1 >> n2;
    }
};

class ope : public arithmetic
{
    public:
    float sum()
    {
        return n1 + n2;
    }

    float sub()
    {
        return n1 - n2;
    }

    float pro()
    {
        return n1 * n2;
    }

    float div()
    {
        return n1 / n2;
    }
};

int main()
{
    char c;
    float sum, subt, mul, divi;
    ope o;

    o.input();

    cout << "Enter an arithmetic operation\n";
    cout << "+\t - \t * \t /\n";
    cin >> c;

    switch(c)
    {
        case '+':
        sum = o.sum();
        cout << sum;
        break;
        
        case '-':
        subt = o.sub();
        cout << subt;
        break;

        case '*':
        mul = o.pro();
        cout << mul;
        break;

        case '/':
        divi = o.div();
        cout << divi;
        break;
    }

    return 0;


}