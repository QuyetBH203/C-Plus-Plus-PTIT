#include<iostream>
#include<algorithm>

using namespace std;

int arr[100][100];

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> arr[i][j];
			}
		}
		int h1 = 0, h2 = n - 1, c1 = 0, c2 = m - 1;
		while (h1 < h2 && c1 < c2) {
			int pre = arr[h1 + 1][c1];
			for (int i = c1; i <= c2; i++) {
				int cur = arr[h1][i];
				arr[h1][i] = pre;
				pre = cur;
			}
			h1++;
			for (int i = h1; i <= h2; i++) {
				int cur = arr[i][c2];
				arr[i][c2] = pre;
				pre = cur;
			}
			c2--;
			if (h1 <= h2) {
				for (int i = c2; i >= c1; i--) {
					int cur = arr[h2][i];
					arr[h2][i] = pre;
					pre = cur;
				}
				h2--;
			}
			if (c1 <= c2) {
				for (int i = h2; i >= h1; i--) {
					int cur = arr[i][c1];
					arr[i][c1] = pre;
					pre = cur;
				}
				c1++;
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j <m; j++) {
				cout << arr[i][j] << " ";
			}
		}
		cout << endl;


	}
	return 0;
}