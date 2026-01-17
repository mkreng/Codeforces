#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    int w100=0, w200=0;
    vector<int> w(n);
    for(int i=0; i<n; i++){
        cin >> w[i];
        if(w[i]==100){
            w100++;
        }
        else{
            w200++;
        }
    }
    if(w100%2!=0){
        cout << "NO\n";
        return 0;
    }
    int half=(100*w100+200*w200)/2;
    half-=min(w200, half/200)*200;
    if(half<=w100*100 && half%100==0){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}