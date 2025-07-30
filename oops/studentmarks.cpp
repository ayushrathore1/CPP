#include<iostream>
using namespace std;

class student
{
    private:
    char name[20];
    int roll,i;
    int marks[6];

    public :
    void input(){
        cout << "Enter student name: ";
        cin >> name; 
        cout << "Enter Roll No.";
        cin >> roll;
        cout << "cout enter marks of 6 subjects\n";
        for ( i = 0; i < 6; i++)
        {
            cin >> marks[i];
        }
    }

    friend float avg(student& obj);
  
    void output()
    {
        
        float average;
        cout << "Name: " << name << endl;
        cout << "Roll No.: " << roll << endl;
        for (i = 0; i < 6; i++)
        {
            cout << marks[i] << "\t";
        }

        average = avg(*this);

        cout << "The average of marks is: " << average;
    }


};

float avg(student& obj)
{
    int i, sum = 0;
    float avg;
  
    for (i = 0; i < 6; i++)
    {
        sum = sum + obj.marks[i];
    }

    avg = sum/6;

   return avg;
};

int main()
{
    student s;
    s.input();
    
    s.output();

    
}