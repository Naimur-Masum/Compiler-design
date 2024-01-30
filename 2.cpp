#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int ma=0,mi=1e9+7;
    for(int i=0;i<n;i++){
        cin>>a[i];
       ma=max(ma,a[i]);
       mi=min(mi,a[i]);
    }
    cout<<mi<<" "<<ma<<endl;
}

