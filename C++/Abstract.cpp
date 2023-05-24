#include<iostream>
using namespace std;

class MobileUser
{
public:
    void call()
    {
        cout<< "Hello !" << endl;
    }
    virtual void sendMassage() = 0;
};


class Rahim: public MobileUser
{
public:
    void sendMassage()
    {
        cout<< "Hello I am Rahim" << endl;
    }
};

class Karim: public MobileUser
{
public:
    void sendMassage()
    {
        cout<< "Hello I am Karim" << endl;
    }
};

int main()
{
    MobileUser *m;
    Rahim r;
    Karim k;

    m = &r;
    m -> sendMassage();

    m = &k;
    m -> sendMassage();
}
