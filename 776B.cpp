#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vint color(n+2, 1);
    for(int i=2; i<n+2; i++){
        if(color[i]==1){
            for(int j=i*i; j<n+2; j+=i){
                color[j]=2;
            }
        }
    }
    if(n==1){
        cout << "1\n1\n";
    }
    else if(n==2){
        cout << "1\n1 1\n";
    }
    else{
        cout << "2\n";
        for(int i=2; i<n+2; i++){
            cout << color[i] << " ";
        }
        cout << endl;
    }
    return 0;
}