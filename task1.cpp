#include<bits/stdc++.h>
using namespace std;

void output(){
    int  f=0,p=0;
    string s;
    cin>>s;
    //string s1={};
    for(int i=0;i<s.size();i++){
        if( s[i]>57 || s[i]<47 ){

            f++;

        }
        if(s[i]==46)p++;

    }
    if(f>0 && p!=1){
        cout<<"not numerical"<<endl;

    }
    else cout<<"numerical"<<endl;
}
int main(){

        output();

}
