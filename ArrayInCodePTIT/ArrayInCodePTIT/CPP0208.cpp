#include<iostream>
#include<algorithm>
#define SIZE 100000

using namespace std;


int main() {
	int t;
	cin >> t;
	while (t--) {
		int arr[SIZE];
		int n;
		cin >> n;
		int t;
		cin >> t;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + n);
		for (int i = 1; i <= n; i++) {
			if (i == t) {
				cout << arr[i];
				break;
			}
		}
		cout << endl;
	}
	return 0;

	
}


