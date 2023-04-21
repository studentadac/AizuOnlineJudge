#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(void) {

    long long n, m, l;
    cin >> n >> m >> l;

    long long a[n][m];
    rep(i, n)
        rep(j, m)
        cin >> a[i][j];

    long long b[m][l];
    rep(i, m)
        rep(j, l)
        cin >> b[i][j];

    long long c[n][l];
    rep(i, n)
        rep(j, l)
        c[i][j] = 0;

    rep(i, n)
        rep(j, l)
        rep(k, m)
    {
        c[i][j] += a[i][k] * b[k][j];
    }

    rep(i, n)
    {
        cout << c[i][0];
        rep(j, l - 1)
        {
            cout << " " << c[i][j + 1];
        }
        puts("");
    }

}