#include <bits/stdc++.h>
using namespace std;
void output(string n){
    for(int i=0; i<n.size(); i++){
        if(n[i]-'0'==1){
            cout << "13\n";
            return;
        }
        else if(n[i]-'0'==3){
            cout << "31\n";
            return;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string n;
        cin >> n;
        output(n);
    }
    return 0;
}