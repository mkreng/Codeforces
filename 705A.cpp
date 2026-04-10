#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        if(i%2){
            cout << "I love ";
        }
        else{
            cout << "I hate ";
        }
        if(i!=n-1){
            cout << "that ";
        }
    }
    cout << "it\n";
    return 0;
}