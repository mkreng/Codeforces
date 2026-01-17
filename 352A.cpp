#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    int zero=0;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        if(temp==0){
            zero++;
        }
    }
    int five=n-zero;
    if(zero==0){
        cout << "-1\n";
    }
    else{
        if(five/9==0){
            cout << "0\n";
        }
        else{
            for(int i=0; i<(five/9)*9; i++){
                cout << "5";
            }
            for(int i=0; i<zero; i++){
                cout << "0";
            }
            cout << endl;
        }
    }
    return 0;
}