#include<iostream>
#define size 10000

using namespace std;


int main() {
	int n;
	cin >> n;
	int arr[size];
	for (auto& x : arr) cin >> x;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}

}