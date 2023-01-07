#include<bits/stdc++.h>

using namespace std;

void testCase(){
	int m,n,t;
	cin >> m >> n >> t;
	int a[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
	int size=m*n;
	long int b[size];
	int i, k = 0, l = 0;
	int z = 0;
	while (k < m && l < n)
    {
        // Variable to store value of matrix.
        int val;
         
        /* Print the first row from the remaining rows */
        for (i = l; i < n; ++i)
        {
            // printf("%d ", a[k][i]);
            val = a[k][i];
            b[z] = val;
            ++z;
        }
        k++;
 
        /* Print the last column from the remaining columns */
        for (i = k; i < m; ++i)
        {
            // printf("%d ", a[i][n-1]);
            val = a[i][n-1];
            b[z] = val;
            ++z;
        }
        n--;
 
        /* Print the last row from the remaining rows */
        if ( k < m)
        {
            for (i = n-1; i >= l; --i)
            {
                // printf("%d ", a[m-1][i]);
                val = a[m-1][i];
                b[z] = val;
                ++z;
            }
            m--;
        }
 
        /* Print the first column from the remaining columns */
        if (l < n)
        {
            for (i = m-1; i >= k; --i)
            {
                // printf("%d ", a[i][l]);
                val = a[i][l];
                b[z] = val;
                ++z;
            }
            l++;
        }
    }
    cout << b[t-1] << endl;
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		testCase();
	}
	return 0;
}
