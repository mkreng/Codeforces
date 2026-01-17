#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<pair<int, int>> des(4);
    for(int i=0; i<4; i++){
        string s;
        cin >> s;
        des[i].first=s.size()-2;
        des[i].second=i+1;
    }
    sort(des.begin(), des.end());
    vint poss;
    if(2*des[0].first<=des[1].first){
        poss.push_back(des[0].second);
    }
    if(des[3].first>=2*des[2].first){
        poss.push_back(des[3].second);
    }
    if(poss.size()!=1){
        cout << "C\n";
    }
    else{
        int index=poss[0];
        if(index==1){
            cout << "A\n";
        }
        else if(index==2){
            cout << "B\n";
        }
        else if(index==3){
            cout << "C\n";
        }
        else{
            cout << "D\n";
        }
    }
    return 0;
}