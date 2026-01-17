#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string a;
        cin >> a;
        string b;
        cin >> b;
        int x=0, y=0;
        int k=0;
        while(x<n && y<m){
            if(a[x]==b[y]){
                k++;
                x++;
                y++;
            }
            else{
                y++;
            }
        }
        cout << k << endl;
    }
    return 0;
}