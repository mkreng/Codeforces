#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    const int MAX=100005;
    vector<int> appearance(MAX, 0);
    vector<int> last_position(MAX);
    vector<int> diff(MAX);
    vector<bool> x(MAX, true);
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        appearance[temp]++;
        if(appearance[temp]==1){
            last_position[temp]=i;
        }
        else if(appearance[temp]==2){
            diff[temp]=i-last_position[temp];
            last_position[temp]=i;
        }
        else{
            if(i-last_position[temp]!=diff[temp]){
                x[temp]=false;
            }
            last_position[temp]=i;
        }
    }
    vector<pair<int, int>> ans;
    for(int i=0; i<MAX; i++){
        if(appearance[i]==0){
            continue;
        }
        if(x[i]==false){
            continue;
        }
        if(appearance[i]==1){
            ans.push_back({i, 0});
        }
        else{
            ans.push_back({i, diff[i]});
        }
    }
    cout << ans.size() << endl;
    for(int i=0; i<ans.size(); i++){
        cout << ans[i].first << " " << ans[i].second << endl;
    }
    return 0;
}