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
    int fingers=0;
    for(int i=0; i<n; i++){
        fingers+=a[i];
    }
    int ans=0;
    for(int i=1; i<=5; i++){
        if((fingers+i)%(n+1)!=1){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}