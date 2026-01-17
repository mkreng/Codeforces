#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    vector<pair<int, int>> row(n, {0, 0}), column(m, {0, 0});
    for(int i=0; i<k; i++){
        int type, rorc, colour;
        cin >> type >> rorc >> colour;
        if(type==1){
            row[rorc-1].first=colour;
            row[rorc-1].second=i+1;
        }
        else{
            column[rorc-1].first=colour;
            column[rorc-1].second=i+1;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(row[i].second>column[j].second){
                cout << row[i].first << " ";
            }
            else{
                cout << column[j].first << " ";
            }
        }
        cout << endl;
    }
    return 0;
}