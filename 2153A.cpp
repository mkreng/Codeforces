#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> b(n);
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        sort(b.begin(), b.end());
        int unique=1;
        for(int i=1; i<n; i++){
            if(b[i]!=b[i-1]){
                unique++;
            }
        }
        cout << unique << endl;
    }
    return 0;
}