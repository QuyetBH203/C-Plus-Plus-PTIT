#include<iostream>
#include<algorithm>
#define SIZE 100000

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int arr[SIZE];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + n);
		int min = arr[1] - arr[0];
		for (int i = 1; i < n; i++) {
			if (arr[i] - arr[i - 1] < min) {
				min = arr[i] - arr[i - 1];
			}
		}
		cout << min << endl;


	}
}