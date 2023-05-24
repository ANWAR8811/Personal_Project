#include<iostream>

using namespace std;

class Student
{
    public:
        const int addFee;
        const int exmFee;

    Student(int x, int y)
    :addFee(x), exmFee(y)
    {
        //addFee = x;
        cout<< addFee << endl;
        cout<< exmFee << endl;
    }
};

int main()
{
    Student obj1(15000, 5000);
}
