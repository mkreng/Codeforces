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
    int max=a[0], min=a[0], ans=0;
    for(int i=1; i<n; i++){
        if(a[i]>max){
            ans++;
            max=a[i];
        }
        if(a[i]<min){
            ans++;
            min=a[i];
        }
    }
    cout << ans << endl;
    return 0;
}