#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;

    for (int i = 0; i < t; i++)
    {
         string str;
         cin>>str;
        int d=0;
         for (char c: str)
         {
            if (isdigit(c)) {
                d++;
            } else if (c == 'O') d++;
              else continue;
         }
        //  cout << "Total balls: " << d <<endl;
         
        int o = d/6;
        int b = d%6;
        if (o != 0 && b != 0) { 
            cout<< o << " OVER " << b << " BALL" <<endl;
        } else if (o != 0) cout<< o << " OVER"<<endl;
          else cout<< b << " BALLs"<<endl;
    }
    

}