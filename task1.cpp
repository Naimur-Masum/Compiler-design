#include<bits/stdc++.h>
using namespace std;

void output(){
    int  f=0;
    string s;
    cin>>s;
    //string s1={};
    for(int i=0;i<s.size();i++){
        if( s[i]>'9' && s[i]<='~'){

            f++;

        }

    }
    if(f>0){
        cout<<" not numerical"<<endl;

    }
    else cout<<"numerical"<<endl;
}
int main(){

        output();

}
