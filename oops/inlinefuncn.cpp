#include<iostream>
using namespace std;

class maths 
{
    private: int n;

    public: 
    inline void square()
    {
        cout << "Enter a number" <<  endl;
        cin >> n;

       cout << n * n << endl;

    }    
};

int main()
{
    maths m;
    m.square();
    return 0;
}

