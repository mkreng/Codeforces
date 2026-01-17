#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n+1; i++){
        for(int j=0; j<2*(n-i); j++){
            cout << " ";
        }
        if(i==0){
            cout << "0\n";
        }
        else{
            for(int k=0; k<=i; k++){
                cout << k << " ";
            }
            for(int k=i-1; k>0; k--){
                cout << k << " ";
            }
            cout << "0\n";
        }
    }
    for(int i=n+1; i<2*n+1; i++){
        for(int j=0; j<2*(i-n); j++){
            cout << " ";
        }
        if(i==2*n){
            cout << "0\n";
        }
        else{
            for(int k=0; k<=2*n-i; k++){
                cout << k << " ";
            }
            for(int k=2*n-i-1; k>0; k--){
                cout << k << " ";
            }
            cout << "0\n";
        }
    }
    return 0;
}