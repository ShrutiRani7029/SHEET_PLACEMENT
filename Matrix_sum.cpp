#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;
    cin>>r>>c;
    cout << endl << "Enter elements of 1st matrix: " << endl;

    
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           
           cin >> a[i][j];
       }
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           
           cin >> b[i][j];
       }

    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    cout << endl << "Sum of two matrix is: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        }

    return 0;
}
