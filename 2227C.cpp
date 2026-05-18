#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vint a(n), two, three, none;
        for(auto &i:a){
            cin >> i;
            if(i%6==0){
                cout << i << " ";
            }
            else if(i%2==0 && i%3){
                two.push_back(i);
            }
            else if(i%2 && i%3==0){
                three.push_back(i);
            }
            else{
                none.push_back(i);
            }
        }
        for(auto i:two){
            cout << i << " ";
        }
        for(auto i:none){
            cout << i << " ";
        }
        for(auto i:three){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}