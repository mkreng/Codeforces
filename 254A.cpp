#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    unordered_map<int, vector<int>> data;
    for(int i=0; i<2*n; i++){
        int temp;
        cin >> temp;
        data[temp].push_back(i+1);
    }
    vector<pair<int, int>> ans;
    for(int i=0; i<data.size(); i++){
        if(data[i].size()%2==1){
            cout << "-1\n";
            return 0;
        }
        for(int j=0; j<data[i].size(); j+=2){
            ans.push_back({data[i][j], data[i][j+1]});
        }
    }
    for(int i=0; i<ans.size(); i++){
        cout << ans[i].first << " " << ans[i].second << endl;
    }
    return 0;
}