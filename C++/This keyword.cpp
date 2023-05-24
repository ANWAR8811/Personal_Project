#include<iostream>

using namespace std;

class Student
{
public:
    string name;

    Student(string name)
    {
        //this -> name = name;
        name = name;
    }

    void display()
    {
        cout<< name << endl;
    }
};

int main()
{
    Student s1("Rana");
    s1.display();
}
