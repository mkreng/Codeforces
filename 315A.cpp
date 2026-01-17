#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
    }
    int ans=0;
    for(int i=0; i<n; i++){
        bool can_open=false;
        for(int j=0; j<n; j++){
            if(a[i]==b[j] && i!=j){
                can_open=true;
                break;
            }
        }
        if(can_open==false){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}