#include <bits/stdc++.h>

using namespace std;



int main()
{
   string line;
 while(getline(cin,line))
 {
  sort(line.begin(),line.end()) ;
for(int i= 0; i<line.size();i++)
{
    if(line [i] !=' ')
    {
        cout<<line[i];
    }
}

 cout << endl; 
 }

    return 0;
}