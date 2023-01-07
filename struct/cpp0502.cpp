#include<bits/stdc++.h>


using namespace std;


struct Thisinh{
	string name,date;
	float d1,d2,d3,sum;
};
void nhap(Thisinh &A){
	getline(cin,A.name);
	cin >> A.date >> A.d1 >> A.d2 >> A.d3 ;
	A.sum=A.d1+A.d2+A.d3;
}
void in(Thisinh A){
	cout << A.name << " " << A.date << " ";
	cout << fixed << setprecision(1) << A.sum;
}


int main(){
	struct Thisinh A;
	nhap(A);
	in(A);
	return 0;
}
