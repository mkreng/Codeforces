#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    int a[n];
    int one=0, two=0, three=0, four=0, six=0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]==5 || a[i]==7){
            cout << "-1\n";
            return 0;
        }
        if(a[i]==1){
            one++;
        }
        else if(a[i]==2){
            two++;
        }
        else if(a[i]==3){
            three++;
        }
        else if(a[i]==4){
            four++;
        }
        else{
            six++;
        }
    }
    if(one!=n/3 || four>two || three>six || two-four!=six-three){
        cout << "-1\n";
        return 0;
    }
    for(int i=0; i<three; i++){
        cout << "1 3 6\n";
    }
    for(int i=0; i<four; i++){
        cout << "1 2 4\n";
    }
    for(int i=0; i<six-three; i++){
        cout << "1 2 6\n";
    }
    return 0;
}