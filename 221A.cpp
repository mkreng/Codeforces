#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    if(n==1){
        cout << "1\n";
    }
    else{
        cout << n << " ";
        for(int i=1; i<n; i++){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}