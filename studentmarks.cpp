#include<iostream>
using namespace std;

class student
{
    private:
    char name[20];
    int roll;
    int marks[6];

    public :
    void input(){
        cout << "Enter student name";
        cin >> name; 
        cout << "Enter Roll No.";
        cin >> roll;
        cout << "cout enter marks of 6 subjects";
        for ( i = 0; i < 6; i++)
        {
            cin >> marks[i];
        }
    }

    friend float avg(student& obj);
  
    void output()
    {
        int i;
        float average;
        cout << "Name: " << name << endl;
        cout << "Roll No.: " << roll << endl;
        for (i = 0; i < 6; i++)
        {
            cout << marks[i] << "\t";
        }

        average = avg();

        cout << avg;
    }


};

float avg(student& obj)
{
    int i, sum = 0;
    float avg;
    for(i = 0; i < 6; i++)
    {
        cin >> obj.marks[i]; 
    } 

    for (i = 0; i < 6; i++)
    {
        sum = sum + obj.marks[i];
    }

    avg = sum/6;

   return avg;
}

