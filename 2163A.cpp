#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        bool ans=true;
        for(int i=1; i<n-1; i+=2){
            if(a[i]!=a[i+1]){
                ans=false;
                break;
            }
        }
        if(ans==true){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}