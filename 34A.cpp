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
    int mindiff=abs(a[0]-a[n-1]);
    int ans=-1;
    for(int i=0; i<n-1; i++){
        if(abs(a[i]-a[i+1])<mindiff){
            mindiff=abs(a[i]-a[i+1]);
            ans=i;
        }
    }
    if(ans==-1){
        cout << n << " 1\n";
    }
    else{
        cout << ans+1 << " " << ans+2 << endl;
    }
    return 0;
}