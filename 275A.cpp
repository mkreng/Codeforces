#include <bits/stdc++.h>
using namespace std;
#define ll long long
void turn(int &b){
    b=1-b;
    return;
}
int main(){
    int a[3][3];
    int b[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            b[i][j]=1;
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(a[i][j]%2==1){
                turn(b[i][j]);
                if(i>0){
                    turn(b[i-1][j]);
                }
                if(i<2){
                    turn(b[i+1][j]);
                }
                if(j>0){
                    turn(b[i][j-1]);
                }
                if(j<2){
                    turn(b[i][j+1]);
                }
            }
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << b[i][j];
        }
        cout << endl;
    }
    return 0;
}