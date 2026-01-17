#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int a, b;
int powerof4(int x){
    int ans=1;
    for(int i=0; i<x; i++){
        ans*=4;
    }
    return ans;
}
bool check(int mid){
    bool ans=false;
    int power=mid/2;
    if(mid%2!=0){
        power++;
    }
    int chocolate1=(powerof4(power)-1)/3;
    int chocolate2=((powerof4(mid/2)-1)*2)/3;
    if((chocolate1<=a && chocolate2<=b) || (chocolate1<=b && chocolate2<=a)){
        ans=true;
    }
    return ans;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        cin >> a >> b;
        int low=1, high=100;
        while(high-low>1){
            int mid=(high+low)/2;
            if(check(mid)){
                low=mid;
            }
            else{
                high=mid-1;
            }
        }
        if(check(high)){
            cout << high << endl;
        }
        else{
            cout << low << endl;
        }
    }
    return 0;
}