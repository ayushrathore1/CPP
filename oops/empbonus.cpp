#include<iostream>
using namespace std;

class employee
{
    private: 
    char name[20];
    int id,salary;
    float rating;
    
    public: 

    void input()
    {
        cout << "Enter Employee Name: " << endl;
        cin >> name;
        cout << "Enter employee ID: " ;
        cin >> id;
        cout << "Enter employee's salary: ";
        cin >> salary;
        cout << "Enter employee's Performance Rating: ";
        cin >> rating;
    }

    friend void bonus (employee& obj);

};

void bonus(employee& obj)
{
        cout << "Name: " << obj.name << endl;
        cout << "Id: " << obj.id << endl;
        cout << "Salary: " << obj.salary << endl;
        cout << "Performance Rating: " << obj.rating << endl;
    if(obj.rating >= 4.5)
    {
        cout << obj.name <<" will get 20% of salary " << (obj.salary) * 0.2 << " as bonus";
    
    } else if (obj.rating > 4 && obj.rating < 4.5)
    {
        cout << obj.name << " will get 15% of salary " << (obj.salary) * 1.5 << " as bonus";

    } else if (obj.rating > 3.5 && obj.rating < 4)
    {
        cout << obj.name << " will get 10% of salary " << (obj.salary) * 0.1 << " as bonus";
    }
    else 
    {
        cout << "No Bonus for now !!!"; 
    }
}

int main()
{
    employee E;
    E.input();
    bonus(E);
}