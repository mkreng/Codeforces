#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int m=1; m<=1000; m++){
        bool is_prime=1;
        for(int i=2; i*i<=n*m+1; i++){
            if((n*m+1)%i==0){
                is_prime=0;
                break;
            }
        }
        if(!is_prime){
            cout << m;
            return 0;
        }
    }
    return 0;
}