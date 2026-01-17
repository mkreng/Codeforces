#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string h, t;
    getline(cin, h);
    getline(cin, t);
    sort(h.begin(), h.end());
    sort(t.begin(), t.end());
    t.erase(remove(t.begin(), t.end(), ' '), t.end());
    h.erase(remove(h.begin(), h.end(), ' '), h.end());
    int found=0;
    int size=t.size();
    for(int i=0; i<h.size(); i++){
        if(h[i]==t[found]){
            found++;
        }
    }
    if(found==size){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}