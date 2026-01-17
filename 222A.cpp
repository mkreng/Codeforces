#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=k; i<n; i++){
        if(a[i]!=a[k-1]){
            cout << "-1\n";
            return 0;
        }
    }
    int diff=-1;
    for(int i=k-2; i>=0; i--){
        if(a[i]!=a[k-1]){
            diff=i;
            break;
        }
    }
    cout << diff+1 << endl;
}