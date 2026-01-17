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
    int temp[n];
    for(int i=0; i<n; i++){
        temp[i]=(a[i]-1)/m;
    }
    int ans=0;
    for(int i=1; i<n; i++){
        if(temp[i]>=temp[ans]){
            ans=i;
        }
    }
    cout << ans+1 << endl;
    return 0;
}