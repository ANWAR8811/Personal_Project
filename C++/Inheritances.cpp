#include<iostream>

using namespace std;

class Person
{
public:
    string name;
    int age;

    void display()
    {
        cout<< name << endl;
        cout<< age << endl;
    }
};

class Student: public Person
{
public:
    int id;

    void display()
    {
        cout<< "Name" << name << endl;
        cout<< "age" << age << endl;
        cout<< "Id" << id << endl;
    }
};

int main()
{
    Student s1;
    s1.name = "Rana";
    s1.age = 1342;
    s1.id = 12;
    s1.display();
}
