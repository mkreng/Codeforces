#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string a=s.substr(0, n);
    string b=s.substr(n, n);
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    bool a_less=true, a_more=true;
    for(int i=0; i<n; i++){
        if(a[i]>=b[i]){
            a_less=false;
        }
        if(a[i]<=b[i]){
            a_more=false;
        }
    }
    if(a_less || a_more){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}