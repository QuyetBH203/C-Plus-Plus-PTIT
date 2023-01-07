#include<bits/stdc++.h>

using namespace std;


void testCase(){
    int n,x;
    cin >> n >> x;
    int arr[n+1];
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    for(int i=1;i<=n;i++){
        if(arr[i]==x){
            cout << i << endl;
            break;
        }
    }

}

int main(){
    int t;
    cin >> t;
    while(t--){
        testCase();
    }
    return 0;
}