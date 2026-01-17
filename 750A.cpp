#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k, time=0;
    cin >> n >> k;
    for(int i=1; i<=n; i++){
        time+=5*i;
        if(time==240-k){
            cout << i;
            return 0;
        }
        if(time>240-k){
            cout << i-1;
            return 0;
        }
    }
    cout << n;
    return 0;
}