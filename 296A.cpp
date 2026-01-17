#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<int> freq;
    int temp=1;
    for(int i=1; i<n; i++){
        if(a[i]==a[i-1]){
            temp++;
        }
        else{
            freq.push_back(temp);
            temp=1;
        }
    }
    freq.push_back(temp);
    bool ans=true;
    for(int i=0; i<freq.size(); i++){
        if(freq[i]>(n+1)/2){
            ans=false;
            break;
        }
    }
    if(ans==true){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}