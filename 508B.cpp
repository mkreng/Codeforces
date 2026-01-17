#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string n;
    cin >> n;
    int odd=n[n.size()-1]-48, firsteven=-1, lasteven=-1;
    bool firstevenfound=false;
    for(int i=n.size()-1; i>=0; i--){
        int digit=n[i]-48;
        if(!firstevenfound && digit%2==0){
            firsteven=i;
            firstevenfound=true;
            break;
        }
    }
    if(!firstevenfound){
        cout << "-1\n";
        return 0;
    }
    for(int i=0; i<n.size(); i++){
        int digit=n[i]-48;
        if(digit%2==0 && digit<odd){
            lasteven=i;
            break;
        }
    }
    if(lasteven==-1){
        for(int i=0; i<n.size(); i++){
            int digit=n[i]-48;
            if(digit%2==0 && digit==odd){
                lasteven=i;
                break;
            }
        }
        
    }
    if(lasteven==-1){
        swap(n[n.size()-1], n[firsteven]);
        cout << n << endl;
    }
    else{
        swap(n[n.size()-1], n[lasteven]);
        cout << n << endl;
    }
    return 0;
}