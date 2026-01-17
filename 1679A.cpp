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
        int n;
        cin >> n;
        if(n%2==1 || n==2){
            cout << "-1\n";
        }
        else{
            int min=n/6;
            if(n%6!=0){
                min++;
            }
            cout << min << " " << n/4 << endl;
        }
    }
    return 0;
}