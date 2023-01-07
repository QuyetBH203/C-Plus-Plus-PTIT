#include<iostream>
#define SIZE 10000

using namespace std;

void testCase() {
	int arr[SIZE];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int max = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << max << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		testCase();
	}
	return 0;
}