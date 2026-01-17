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
        int temp=n;
        while(temp!=0){
            cout << temp << " ";
            temp--;
        }
        cout << n << " ";
        temp=1;
        while(temp!=n){
            cout << temp << " ";
            temp++;
        }
        cout << endl;
    }
    return 0;
}