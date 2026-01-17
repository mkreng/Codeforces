#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n, m;
    cin >> n >> m;
    int f[m];
    for(int i=0; i<m; i++){
        cin >> f[i];
    }
    sort(f, f+m);
    int diff=f[n-1]-f[0];
    for(int i=1; i<m; i++){
        if(i+n-1<m && f[i+n-1]-f[i]<diff){
            diff=f[i+n-1]-f[i];
        }
    }
    cout << diff << endl;
    return 0;
}