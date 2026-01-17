#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n, m;
    cin >> n >> m;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    int ans=0, load=0;
    for(int i=0; i<n; i++){
        if(a[i]<0 && load<m){
            ans+=a[i];
            load++;
        }
        else{
            break;
        }
    }
    cout << ans*(-1) << endl;
    return 0;
}