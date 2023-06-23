// #include <iostream>
// #include <vector>

// void printGrid(const std::vector<std::vector<int>>& grid) {
//     for (const auto& row : grid) {
//         for (int num : row) {
//             std::cout << num << " ";
//         }
//         std::cout << std::endl;
//     }
// }

// int main() {
//     int n, m;
//     std::cin >> n >> m;

//     std::vector<std::vector<int>> grid(n, std::vector<int>(m));
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             std::cin >> grid[i][j];
//         }
//     }

//     int q;
//     std::cin >> q;

//     for (int i = 0; i < q; i++) {
//         int r, c;
//         std::cin >> r >> c;

//         int a = grid[r - 1][c - 1];
//         int b = grid[r - 1][c];
//         int cc = grid[r - 1][c + 1];
//         int d = grid[r][c - 1];
//         int e = grid[r][c + 1];
//         int f = grid[r + 1][c - 1];
//         int g = grid[r + 1][c];
//         int h = grid[r + 1][c + 1];

//         grid[r - 1][c] = a;
//         grid[r - 1][c + 1] = b;
//         grid[r - 1][c - 1] = d;
//         grid[r][c + 1] = cc;
//         grid[r][c - 1] = f;
//         grid[r + 1][c + 1] = e;
//         grid[r + 1][c] = h;
//         grid[r + 1][c - 1] = g;

//         printGrid(grid);
//         std::cout << std::endl;
//     }

//     std::cin.ignore(); // Ignore remaining input

//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
	ios_base::sync_with_stdio(); \
	cin.tie(0);                  \
	cout.tie(0);
#define int long long
#define all(x) (x).begin(), (x).end()
#define f(i, a, b) for (int i = a; i < b; i++)

int32_t main()
{
	fastio;
	int n, m;
	cin >> n >> m;
	int grid[n + 1][m + 1];
	f(i, 0, n)
	{
		f(j, 0, m)
		{
			cin >> grid[i][j];
		}
	}
	int q;
	cin >> q;
	while (q--)
	{
		int r, c;
		cin >> r >> c;
		int a=grid[r-1][c-1];
		int b=grid[r-1][c];
		int cc=grid[r-1][c+1];
		int d=grid[r][c-1];		
		int e=grid[r][c+1];
		int f=grid[r+1][c-1];
		int g=grid[r+1][c];		
		int h=grid[r+1][c+1];
		grid[r-1][c]=a;
		grid[r-1][c+1]=b;
		grid[r-1][c-1]=d;
		grid[r][c+1]=cc;
		grid[r][c-1]=f;
		grid[r+1][c+1]=e;
		grid[r+1][c]=h;
		grid[r+1][c-1]=g;
		f(i,0,n){
			f(j,0,m){
				cout<<grid[i][j]<<" ";
			}
			cout<<"\n";
		}
	}
	return 0;
}