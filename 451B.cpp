#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin >> n;
    vector<int> a(n);
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }
    if(n==2){
        if(a[0]<a[1]){
            cout << "yes\n1 1\n";
        }
        else{
            cout << "yes\n1 2\n";
        }
        return 0;
    }
    vector<int> b=a;
    sort(b.begin(), b.end());
    if(b==a){
        cout << "yes\n1 1\n";
        return 0;
    }
    ll start=0, end=1;
    bool found_segment=false, segment_started=false;
    while(!found_segment && end<n-1){
        if(!segment_started){
            if(a[start]>a[end]){
                segment_started=true;
            }
            else{
                start++;
                end++;
            }
        }
        else{
            if(a[end]<a[end+1]){
                found_segment=true;
            }
            else{
                end++;
            }
        }
    }
    vector<int> c=a;
    reverse(c.begin()+start, c.begin()+end+1);
    if(b==c){
        cout << "yes\n" << start+1 << " " << end+1 << endl;
    }
    else{
        cout << "no\n";
    }
    return 0;
}