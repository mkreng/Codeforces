#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    vector<pair<int, int>>v;
    for(int i=0; i<n; i++){
        v.push_back({a[i], i+1});
    }
    sort(v.begin(), v.end());
    int time=0, instruments=0;
    vector <int> index;
    for(int i=0; i<n; i++){
        if(k>=time+v[i].first){
            instruments++;
            time+=v[i].first;
            index.push_back(v[i].second);
        }
        else{
            break;
        }
    }
    cout << instruments << endl;
    for(int i : index){
        cout << i << " ";
    }
    return 0;
}