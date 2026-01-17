#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string hometeam, awayteam;
    cin >> hometeam >> awayteam;
    int n;
    cin >> n;
    unordered_set<int> home, away, homered, awayred;
    while(n--){
        int t;
        cin >> t;
        char team;
        cin >> team;
        int m;
        cin >> m;
        char card;
        cin >> card;
        if(card=='r'){
            if(team=='h' && homered.find(m)==homered.end()){
                homered.insert(m);
                cout << hometeam << " ";
                cout << m << " " << t << endl;
            }
            if(team=='a' && awayred.find(m)==awayred.end()){
                awayred.insert(m);
                cout << awayteam << " ";
                cout << m << " " << t << endl;
            }
        }
        else{
            if(team=='h' && homered.find(m)==homered.end()){
                if(home.find(m)==home.end()){
                    home.insert(m);
                }
                else{
                    home.erase(m);
                    homered.insert(m);
                    cout << hometeam << " " << m << " " << t << endl;
                }
            }
            if(team=='a' && awayred.find(m)==awayred.end()){
                if(away.find(m)==away.end()){
                    away.insert(m);
                }
                else{
                    away.erase(m);
                    awayred.insert(m);
                    cout << awayteam << " " << m << " " << t << endl;
                }
            }
        }
    }
    return 0;
}