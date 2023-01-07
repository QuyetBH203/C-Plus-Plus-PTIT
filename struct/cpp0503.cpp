#include<bits/stdc++.h>

using namespace std;


struct Phanso{
	long long x,y;
};
void nhap(Phanso &p){
	cin >> p.x >> p.y;
}
void rutgon(Phanso &p){
	long long g=_gcd(p.x,p.y);
	p.x/=g;
	p.y/=g;

}
void in(Phanso p){
	cout << p.x << "/" << p.y;
}

int main(){
	struct Phanso p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
