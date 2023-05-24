#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float n1, n2;

    cout<< "Enter 2 numbers: " <<endl;
    cin>> n1 >> n2;

    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(2 );
    float s = n1 + n2;
    cout<<setw(20)<< "Sum: " << s <<endl;

    cout<<noshowpoint;
    float m = n1 - n2;
    cout<<setw(20)<< "Substarction: " << m <<endl;

    float d = (float) n1 / n2;
    cout<<setw(20)<< "Division: " << d <<endl;

    /* float r = n1 % n2;
    cout<< "Remaninder: " << r <<endl;*/



}

