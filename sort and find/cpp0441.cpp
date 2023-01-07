#include<bits/stdc++.h>

using namespace std;

void testCase(){
    int n,k;
    int arr[n+1];
    
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    
    for(int i=1;i<=n;i++){
        if(arr[i]==k){
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        testCase();
    }
    return 0;
}