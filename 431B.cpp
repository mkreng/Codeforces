#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int g[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> g[i][j];
        }
    }
    int happiness;
    int ans=0;
    for(int a=0; a<5; a++){
        for(int b=0; b<5; b++){
            if(b==a){
                continue;
            }
            for(int c=0; c<5; c++){
                if(c==a || c==b){
                    continue;
                }
                for(int d=0; d<5; d++){
                    if(d==a || d==b || d==c){
                        continue;
                    }
                    for(int e=0; e<5; e++){
                        if(e==a || e==b || e==c || e==d){
                            continue;
                        }
                        happiness=g[a][b]+g[b][a]+g[c][d]+g[d][c]+g[b][c]+g[c][b]+g[d][e]+g[e][d]+g[c][d]+g[d][c]+g[d][e]+g[e][d];
                        ans=max(ans, happiness);
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}