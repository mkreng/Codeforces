#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, s;
    cin >> a >> b >> s;
    if(s>=abs(a)+abs(b) && (s-(abs(a)+abs(b)))%2==0){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
    return 0;
}