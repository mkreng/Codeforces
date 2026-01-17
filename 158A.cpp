#include <bits/stdc++.h>
using namespace std;
int main(){
    int count=0, n=0, k=0, x=0;
    int scores[50];
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> scores[i];
    }
    x=scores[k-1];
    for(int i=0; i<n; i++){
        if(scores[i]>=x && scores[i]>0){
            count++;
        }
    }
    cout << count;
    return 0;
}