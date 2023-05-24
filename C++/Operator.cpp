#include<iostream>
using namespace std;
int main(){
    int n1, n2, s, m, d, r;
    cout<< "Enter 2 numbers: " <<endl;
    cin>> n1 >> n2;
    s = n1 + n2;
    cout<< "Sum: " << s <<endl;
    m = n1 - n2;
    cout<< "Substarction: " << m <<endl;
    d = (float)n1 / n2;
    cout<< "Division: " << d <<endl;
    r = n1 % n2;
    cout<< "Remaninder: " << r <<endl;

    /*double n1, n2, s, m, d, r;
    cout<< "Enter 2 numbers: " <<endl;
    cin>> n1 >> n2;
    s = n1 + n2;
    cout<< "Sum: " << s <<endl;
    m = n1 - n2;
    cout<< "Substarction: " << m <<endl;
    d = n1 / n2;
    cout<< "Division: " << d <<endl;
    r = n1 % n2;
    cout<< "Remaninder: " << r <<endl;*/

}
