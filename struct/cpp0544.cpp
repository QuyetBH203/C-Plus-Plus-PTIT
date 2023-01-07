#include <bits/stdc++.h>

#define PI 3.141592653589793238

using namespace std;

struct toado
{
    double x, y;
};
void nhap(toado &a)
{
    cin >> a.x >> a.y;
}
void process(toado a, toado b, toado c)
{
    double m = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
    double n = sqrt((a.x - c.x) * (a.x - c.x) + (a.y - c.y) * (a.y - c.y));
    double p = sqrt((c.x - b.x) * (c.x - b.x) + (c.y - b.y) * (c.y - b.y));
    if (m < n + p && n < m + p && p < m + n)
    {
        double k = (double)(m + n + p) / 2;
        double S = sqrt(k * (k - m) * (k - n) * (k - p));
        double R = (double)(m * n * p) / (4 * S);
        double dientich = R * R * PI;
        cout << fixed << setprecision(3) << dientich << endl;
    }
    else
    {
        cout << "INVALID" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        toado a, b, c;
        nhap(a);
        nhap(b);
        nhap(c);
        process(a, b, c);
    }
    return 0;
}
