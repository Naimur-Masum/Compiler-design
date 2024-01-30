#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    char f[n],l[m];
    char s[n+m+1];
    for(int i=0;i<n;i++){
       cin>>f[i];
       s[i]=f[i];
    }
    s[n]=' ';
    for(int i=0;i<m;i++){
        cin>>l[i];
        s[n+1+i]=l[i];
    }
   for(int i=0;i<n+m+1;i++)cout<<s[i];

}

