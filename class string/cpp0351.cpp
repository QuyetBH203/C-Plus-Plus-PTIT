#include<bits/stdc++.h>

using namespace std;

void testCase1(){
    string s,t;
    cin >> s;
    toupper(s);
    stringstream ss(s);
    vector<string> v;
    while(ss >> t){
        v.push_back(t);
    }
    cout << v.back() << " ";
    v.pop_back();
    for(auto x: v){
        cout << x << " ";
    }


}

int main(){
    int t;
    cin >> t;
    while(t--){
        testCase1();
    }
}
