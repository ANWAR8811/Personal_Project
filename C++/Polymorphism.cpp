#include<iostream>

using namespace std;

class Person
{
public:

    virtual void display()
    {
        cout<< "I am a person." << endl;
    }
};

class Student: public Person
{
public:

    virtual void display()
    {
        cout<< "I am a student." << endl;
    }
};

class Teacher: public Student
{
public:

    virtual void display()
    {
        cout<< "I am a teacher." << endl;
    }
};

int main()
{
    Person *p;
    Teacher t;
    Student s;

    //p.display();

    p = &s;
    p -> display();

    p = &t;
    p -> display();
}
