#include<bits/stdc++.h>

using namespace std;



int main(){
   const char* str1 = "123.25abc";
   const char* str2 = "10010101ABCHKJKLL";
   const char* str3 = "12FCABHGPPOIUYT155";
   // chuy?n str1 thành s? ki?u int:
   cout << "Integer number value: " << atoi(str1) << endl;
   // chuy?n str1 thành s? ki?u double:
   cout << "Float number value: " << atof(str1) << endl;
   // chuy?n str2 thành s? ki?u long:
   char* endPtr;
   cout << "Long number value: " << strtol(str2, &endPtr, 2) << endl;
   cout << "Remainder after convert to long: " << endPtr << endl;
   // chuy?n str3 thành s? ? ki?u long long:
   cout << "Long long number value: " << strtoll(str3, &endPtr, 16) << endl;
   cout << "Remainder after convert to long long: " << endPtr << endl;
}
