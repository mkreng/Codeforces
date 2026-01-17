#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int p=n+(n/2)*2+(n/3)*2;
        cout << p << endl;
    }
    return 0;
}