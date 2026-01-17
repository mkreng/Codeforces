#include <bits/stdc++.h>
using namespace std;
int main(){
    int x[3];
    for(int i=0; i<3; i++){
        cin >> x[i];
    }
    sort(x, x+3);
    int d=0;
    for(int i=0; i<3; i++){
        d+=abs(x[i]-x[1]);
    }
    cout << d << endl;
    return 0;
}