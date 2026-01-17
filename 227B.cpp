#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int m;
    cin >> m;
    int b[m];
    for(int i=0; i<m; i++){
        cin >> b[i];
    }
    int temp[n];
    for(int i=0; i<n; i++){
        temp[a[i]-1]=i;
    }
    ll vasya=0, petya=0;
    for(int i=0; i<m; i++){
        vasya+=temp[b[i]-1]+1;
        petya+=n-temp[b[i]-1];
    }
    cout << vasya << " " << petya << endl;
    return 0;
}