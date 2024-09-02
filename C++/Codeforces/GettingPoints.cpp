#include <iostream>

using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n, p, l, t;

        cin >> n >> p >> l >> t;

        if (n < 8) {
            int c=0, temp=0;

            for (int i=0; i<n; i++) {
                  c++;
                  temp += l;
                  if (temp+t >= p) {
                    cout << n-c;
                    break;
                  }
            }

        }
        else {                // aita partesina korte hobe abr
            int w = n / 7;
            int c=0, temp=0;

            for (int i=0; i<w; i++) {
                  c++;
                  temp += l;
                  if (temp+t >= p) {
                    cout << n-c;
                    break;
                  }
            }
        }
    }
}