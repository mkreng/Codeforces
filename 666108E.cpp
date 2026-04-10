#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
bool check(int l, int n, int c, vint &prefix){
    if(l==0){
        return true;
    }
    for(int i=0; i<n-l+1; i++){
        if(prefix[i+l]-prefix[i]>c){
            return false;
        }
    }
    return true;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string C;
    cin >> C;
    int c=0;
    if(C[C.size()-1]=='M'){
        int temp=1;
        for(int i=C.size()-2; i>=0; i--){
            c+=(C[i]-'0')*temp;
            temp*=10;
        }
    }
    if(C[C.size()-1]=='G'){
        int temp=1;
        for(int i=C.size()-2; i>=0; i--){
            c+=(C[i]-'0')*temp;
            temp*=10;
        }
        c*=1024;
    }
    if(C[C.size()-1]=='T'){
        int temp=1;
        for(int i=C.size()-2; i>=0; i--){
            c+=(C[i]-'0')*temp;
            temp*=10;
        }
        c*=1024*1024;
    }
    vint s(n);
    for(int i=0; i<n; i++){
        cin >> s[i];
    }
    vint prefix(n+1, 0);
    for(int i=1; i<=n; i++){
        prefix[i]=prefix[i-1]+s[i-1];
    }
    int low=0, high=n;
    while(high-low>1){
        int mid=(high+low)/2;
        if(check(mid, n, c, prefix)){
            low=mid;
        }
        else{
            high=mid-1;
        }
    }
    int r=low;
    if(check(high, n, c, prefix)){
        r=high;
    }
    int l=-1, tocheck=r+1;
    if(tocheck<=n){
        for(int i=0; i<n-tocheck; i++){
            if(prefix[i+tocheck]-prefix[i]>c){
                l=i+1;
                break;
            }
        }
    }
    cout << r << " " << l << endl;
    return 0;
}