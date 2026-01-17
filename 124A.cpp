#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n, a, b;
    cin >> n >> a >> b;
    if(n-1<a){
        cout << "0\n";
    }
    else{
        if(n-a-1<b){
            cout << n-a << endl;
        }
        else{
            cout << b+1 << endl;
        }
    }
    return 0;
}