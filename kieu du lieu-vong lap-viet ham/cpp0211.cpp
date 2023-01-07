#include<bits/stdc++.h>
#define SIZE 10000

using namespace std;


int main(){
	int arr[SIZE];
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int min=1;
	for(int j=0;j<n;j++){
		for(int i=1;i<n;i++){
			if(arr[j]>=arr[i] && j-i > min ){
				min=i-j;
			}
		}
	}
	cout << min << endl;
	return 0;
} 
