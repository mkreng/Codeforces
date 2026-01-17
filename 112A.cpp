#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string a, b;
    cin >> a >> b;
    for(int i=0; i<a.size(); i++){
        if(a[i]>='A' && a[i]<='Z'){
            a[i]+='a'-'A';
        }
        if(b[i]>='A' && b[i]<='Z'){
            b[i]+='a'-'A';
        }
    }
    if(a>b){
        cout << "1\n";
    }
    else if(a<b){
        cout << "-1\n";
    }
    else{
        cout << "0\n";
    }
    return 0;
}