#include<iostream>
using namespace std;

class student
{
    private:
    char name[20];
    int roll_no,marks[3];
    float avg;

    public:
    void input()
    {   cout << "Enter student details: " << endl;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll no.: ";
        cin >> roll_no;
        cout << "Enter marks of 3 subjects: " << endl;
        cin >> marks[0] >> marks[1] >> marks [2];

    }

    void display()
    {
        avg = (marks[0] + marks[1] + marks[2])/3;

        cout << "\nName: " << name << endl;
        cout << "Roll No. : " << roll_no << endl;
        cout << "marks\n" << "s1: " << marks[0] << "\ns2: " << marks[1] << "\ns3: " << marks[2];
        cout << "\nAverage: " << avg;
    }
};

int main()
{
    student s[20];

    int n;

    cout << "Enter no. of students: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        s[i].input();
    }

    for (int i = 0; i < n; i++)
    {
        s[i].display();
    }
}

