#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    vector<int> worm(n);
    for(int i=0; i<n; i++){
        cin >> worm[i];
    }
    for(int i=1; i<n; i++){
        worm[i]+=worm[i-1];
    }
    int m;
    cin >> m;
    for(int i=0; i<m; i++){
        int juicy;
        cin >> juicy;
        int lb=lower_bound(worm.begin(), worm.end(), juicy)-worm.begin();
        cout << lb+1 << endl;
    }
    return 0;
}