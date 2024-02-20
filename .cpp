#include<bits/stdc++.h>
using namespace std;

string ans(string s){
    int f=0;


    //cin>>s;
    string ss={};
    string sss={};
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
            sss+=ss[i];
        }
       return sss;
    }
    return ss;
}


bool isValidIdentifier(string var){
    if(var=="string"||var=="char"||var=="int"||var=="double"||var=="float"||var=="bool"||var=="long"||var=="void")
    {
        cout<<"input is data type"<<endl;
        return false;
    }
    char c;
    bool f=0;
    int n=var.size();
    if((var[0]>='A'&&var[0]<='Z')||(var[0]>='a'&&var[0]<='z')||var[0]=='_'){
        for(int i=1;i<n;i++){
            if((var[i]>='A'&&var[i]<='Z')||(var[i]>='a'&&var[i]<='z')||var[i]=='_'||(var[i]>='0'&&var[i]<='9'))
                f=1;
                else{ f=0;
                c=var[i];
                break;
                }
        }
        if(f)return true;
        else {
                cout<<"invalide for "<<c<<endl;
        return false;

    }
    }
    else{
            cout<<"invalide for "<<var[0]<<endl;
            return false;
    }

}


int main(){
    char c;
    string s;
    cin>>s;
    cout<<isValidIdentifier(s);

}



