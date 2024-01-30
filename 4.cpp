#include<bits/stdc++.h>
using namespace std;
int main(){
    bool f=1;
    int n;
    cin>>n;
    int m=1;
    if(n==0){
        cout<<m<<endl;
        f=0;
    }
    for(int i=1;i<=n;i++){
        m*=i;
    }
    if(f)
    cout<<m<<endl;
}

