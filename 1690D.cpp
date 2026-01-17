#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vint vector<int>
#define vll vector<long long>
#define endl "\n"
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        ll black=0;
        for(ll i=0; i<k; i++){
            if(s[i]=='B'){
                black++;
            }
        }
        ll max_black=black;
        for(ll i=1; i+k-1<n; i++){
            if(s[i-1]=='B'){
                black--;
            }
            if(s[i+k-1]=='B'){
                black++;
            }
            max_black=max(black, max_black);
        }
        cout << k-max_black << endl;
    }
    return 0;
}