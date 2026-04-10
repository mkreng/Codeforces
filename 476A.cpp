#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int min=n/2;
    if(n%2!=0){
        min++;
    }
    int temp=min/m;
    if(min%m!=0){
        temp++;
    }
    temp*=m;
    if(temp<=n){
        cout << temp << endl;
    }
    else{
        cout << "-1\n";
    }
    return 0;
}