#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        int c=n/k;
        if(m>=c){
            int x=c;
            m-=c;
            int y=m/(k-1);
            if(m%(k-1)){
                y++;
            }
            cout << x-y << endl;
        }
        else{
            cout << m << endl;
        }
    }
    return 0;
}