#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string a, b;
    cin >> a >> b;
    string x[a.size()];
    for(int i=0; i<a.size(); i++){
        if(a[i]==b[i]){
            x[i]='0';
        }
        else{
            x[i]='1';
        }
    }
    for(int i=0; i<a.size(); i++){
        cout << x[i];
    }
    cout << endl;
    return 0;
}