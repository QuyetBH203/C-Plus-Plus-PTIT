#include<bits/stdc++.h>

using namespace std;

void testCase(){
    int n;
    cin >> n;
    int a[n];
    for(auto &x: a){
        cin >> x;
    }
    sort(a,a+n,greater<int>());
    int l=0,r=n-1;
    while(l<r){
        cout << a[l++] << " " << a[r--] << " ";
    }
    if(l==r){
        cout << a[l] << " ";
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        testCase();
    }
    return 0;
}