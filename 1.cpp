#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int m=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m+=a[i];
    }
    cout<<m/n<<endl;
}

