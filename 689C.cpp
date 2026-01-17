#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int m;
bool check(int n){
    int ans=0, i=2;
    while(1){
        if((i*i*i)>n){
            break;
        }
        ans+=n/(i*i*i);
        i++;
        if(ans>=m){
            return true;
        }
    }
    return ans>=m;
}
bool exact_check(int n){
    int ans=0, i=2;
    while(1){
        if((i*i*i)>n){
            break;
        }
        ans+=n/(i*i*i);
        i++;
    }
    return ans==m;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> m;
    int low=8, high=1e18;
    while(high-low>1){
        int mid=(high+low)/2;
        if(check(mid)){
            high=mid;
        }
        else{
            low=mid+1;
        }
    }
    if(exact_check(low)){
        cout << low << endl;
    }
    else if(exact_check(high)){
        cout << high << endl;
    }
    else{
        cout << "-1\n";
    }
    return 0;
}