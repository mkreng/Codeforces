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
    int four=INT_MAX, seven=INT_MAX;
    for(int i=0; i<=n/7; i++){
        if((n-7*i)%4==0){
            int f=(n-7*i)/4;
            int s=i;
            if(f+s<four+seven){
                four=f;
                seven=s;
            }
        }
    }
    if(four==INT_MAX){
        cout << "-1\n";
    }
    else{
        while(four--){
            cout << "4";
        }
        while(seven--){
            cout << "7";
        }
        cout << endl;
    }
    return 0;
}