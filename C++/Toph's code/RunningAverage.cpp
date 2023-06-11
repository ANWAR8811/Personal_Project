#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int N;
	cin >> N;
	int a[N];
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}

	double sum = 0.0;
	for (int i = 0; i < N; i++)
	{
		sum += a[i];
		double avg = (sum)/(i+1);
		cout << fixed << setprecision(10) << avg << endl;
	}
	return 0;
}

// #include <iostream>
// #include <iomanip>

// using namespace std;

// int main() {
//     int N;
//     cin >> N;
//     int a[N];
//     for (int i = 0; i < N; i++) {
//         cin >> a[i];
//     }

//     double sum = 0.0;
//     for (int i = 0; i < N; i++) {
//         sum += a[i];
//         double avg = sum / (i + 1);
//         cout << fixed << setprecision(10) << avg << endl;
//     }
//     return 0;
// }
