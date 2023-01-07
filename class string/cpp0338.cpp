#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        int k,cnt=0;
        cin >> s >> k;
        for(int i=0;i<s.length();i++){
            set<char> mp;
            for(int j=i;j<s.length();j++){
                mp.insert(s[j]);
                if(mp.size()==k) cnt++;
                if(mp.size()>k) break;
            }
        }
        cout << cnt << endl;
    }
    return 0;

}