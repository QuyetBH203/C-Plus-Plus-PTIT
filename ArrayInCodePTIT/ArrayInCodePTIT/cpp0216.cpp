#include<iostream>
#include<algorithm>
#define SIZE 10000

using namespace std;

int arr[SIZE];

void testCase() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int l, r;
	cin >> l >> r;
	while (l <= r && arr[l] <= arr[l + 1]) {
		l++;
	}
	l++;
	while (l <= r && arr[l] <= arr[l - 1]) {
		l++;
	}
	(l > r) ? cout << "Yes" << endl : cout << "No" << endl;

}
int main() {
	int t;
	cin >> t;
	while (t--) {
		testCase();
	}
	return 0;
}