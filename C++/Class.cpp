#include<iostream>

using namespace std;

class Student
{
    public:
        int id;
        float gpa;

        void display()
        {
            cout<< id << " " <<  gpa <<endl;
        }

        void setValue(int x, float y)
        {
            id = x;
            gpa = y;
        }

};

int main()
{
    Student Rana, Anwar;

    /*Rana.id = 1929;
    Rana.gpa = 88.11;
    Anwar.id = 87;
    Anwar.gpa = 45.56;*/

    Rana.setValue(12, 48.3);
    Rana.display();
    Anwar.setValue(23, 88.7);
    Anwar.display();


    //cout<< Rana.id << endl;
    //cout<< Anwar.gpa << endl;
}
