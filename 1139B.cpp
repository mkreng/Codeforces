#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long stock[n];
    for(int i=0; i<n; i++){
        cin >> stock[i];
    }
    long long max=stock[n-1];
    long long chocolates=0;
    for(int i=n-1; i>=0; i--){
        if(max<0){
            max=0;
        }
        if(stock[i]>=max){
            chocolates+=max;
            max--;
        }
        else{
            chocolates+=stock[i];
            max=stock[i]-1;
        }
    }
    cout << chocolates << endl;
    return 0;
}