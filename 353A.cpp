#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    vector<int> up(n), low(n);
    for(int i=0; i<n; i++){
        cin >> up[i] >> low[i];
    }
    int sum_up=0, sum_low=0;
    for(int i=0; i<n; i++){
        sum_up+=up[i];
        sum_low+=low[i];
    }
    if(sum_up%2==0 && sum_low%2==0){
        cout << "0\n";
    }
    else if((sum_up%2==0 && sum_low%2==1) || (sum_up%2==1 && sum_low%2==0)){
        cout << "-1\n";
    }
    else{
        bool ans=false;
        for(int i=0; i<n; i++){
            if(up[i]%2+low[i]%2==1){
                ans=true;
                cout << "1\n";
                break;
            }
        }
        if(ans==false){
            cout << "-1\n";
        }
    }
    return 0;
}