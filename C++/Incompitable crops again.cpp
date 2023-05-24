#include <iostream>
using namespace std;

int cSS(char f[][25], int r, int c)
{
    int ct = 0;

    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            if (f[i][j] == '.') {
                bool s = true;

                //Check adjacent spots
                if (i>0 && f[i-1][j]=='*')
                    s = false;
                if (i<r-1 && f[i+1][j]=='*')
                    s = false;
                if (j>0 && f[i][j-1]=='*')
                    s = false;
                if (j<c-1 && f[i][j+1]=='*')
                    s = false;

                if (s)
                    ct++;
            }
        }
    }
    return ct;
}

int main()
{
    int R, C;
    cin>> R>>C;

    char f[25][25];

    for (int i=0; i<R; i++) {
        for (int j=0; j<C; j++) {
                cin>> f[i][j];
        }
    }

    int sS = cSS(f,R,C);
    cout<< sS << endl;
}
