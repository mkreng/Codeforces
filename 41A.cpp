#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s, t;
    cin >> s >> t;
    string x=s;
    reverse(x.begin(), x.end());
    if(x==t){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}