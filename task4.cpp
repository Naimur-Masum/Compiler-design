#include<bits/stdc++.h>
using namespace std;
void ans(){
    int f=0;
    string s;
    getline(cin,s);

    //cin>>s;
    string ss={};
    for(int i=0;i<s.size();i++){
        if(s[i]==' ' ){
                if(s[i]!=s[i+1])
            f++;
            continue;
        }
        if(f==1) ss+=s[i];
    }
    bool l=1;
    if(ss[ss.size()-1]==';'){
        for(int i=0;i<ss.size()-1;i++){
            cout<<ss[i];
        }
       // l=0;
    }
    else{
    cout<<ss<<endl;
    }
}


int main(){
    ans();
}

