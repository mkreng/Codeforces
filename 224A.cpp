#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll ab, bc, ca;
    cin >> ab >> bc >> ca;
    ll a=sqrt(ab*bc*ca)/bc;
    ll b=sqrt(ab*bc*ca)/ca;
    ll c=sqrt(ab*bc*ca)/ab;
    cout << 4*(a+b+c) << endl;
    return 0;
}