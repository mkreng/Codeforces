#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vint vector<int>
#define vll vector<long long>
#define endl "\n"
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, r, b;
        cin >> n >> r >> b;
        int red_group=b+1, min_red=r/red_group, extra_red=r%red_group;
        for(int i=0; i<red_group; i++){
            int temp=min_red;
            if(extra_red>i){
                temp++;
            }
            for(int j=0; j<temp; j++){
                cout << "R";
            }
            if(b>0){
                cout << "B";
                b--;
            }
        }
        cout << endl;
    }
    return 0;
}