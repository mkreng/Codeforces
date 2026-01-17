#include <bits/stdc++.h>
using namespace std;
void check(){
    int n;
    string s;
    cin >> n;
    cin >> s;
    for(int i=0; i<n/2; i++){
        int d=abs(s[i]-s[n-i-1]);
        if(d!=0){
            if(d!=2){
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        check();     
    }
    return 0;
}