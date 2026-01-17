#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, t=0;
    cin >> a >> b;
    while(a*pow(3, t)<=b*pow(2, t)){
        t++;
    }
    cout << t;
    return 0;
}