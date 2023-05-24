#include<iostream>
using namespace std;

class A
{
private:
    int id = 102;
    string name = "Rana";

public:
    friend class B;
};


class B
{
public:
    void display(A obj)
    {
        cout<< obj.id << endl;
        cout<< obj.name << endl;
    }
};


int main()
{
    A obj1;
    B obj2;

    obj2.display(obj1);
}
