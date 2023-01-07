#include<iostream>
#include<algorithm>
#define SIZE 100000

const int MAX = 1e6;

int arr[MAX];

using namespace std;


int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int b[SIZE];
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}
		for (int i = 0; i < n; i++) {
			arr[b[i]]++;
		}
		int tmp = 0;
		for (int i = 0; i < MAX; i++) {
			if (arr[i] >= 2) {
				tmp += arr[i];
			}
		}
		cout << tmp << endl;
	}
	
}