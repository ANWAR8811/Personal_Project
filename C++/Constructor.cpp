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
        Student(int x, float y)
        {
            id = x;
            gpa = y;
        }
        Student()
        {
            cout<< "Hello" << endl;
        }


};

int main()
{
    Student Default;
    Student Rana(12, 48.3);;
    Student Anwar(23, 88.7);

    Rana.display();
    Anwar.display();

}

