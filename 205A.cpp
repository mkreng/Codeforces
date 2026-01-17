#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin >> n;
    vector<ll> t;
    for(ll i=0; i<n; i++){
        int temp;
        cin >> temp;
        t.push_back(temp);
    }
    vector<ll> temp=t;
    sort(temp.begin(), temp.end());
    if(temp[0]==temp[1]){
        cout << "Still Rozdil\n";
    }
    else{
        cout << distance(t.begin(), min_element(t.begin(), t.end()))+1 << endl;
    }
    return 0;
}