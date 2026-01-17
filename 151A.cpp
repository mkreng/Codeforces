#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np, toast=0;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    toast = min(k*l/(n*nl), min(c*d/n, p/(n*np)));
    cout << toast;
    return 0;
}