#include<bits/stdc++.h>
using namespace std;

void outpute(){
    string s;

    cin>>s;
    string ans={};
    for(int i=0;i<s.size();i++){
            int j=0;
        if(s[i]=='+'||s[i]=='-'||s[i]=='/'||s[i]=='*'||s[i]=='%'||s[i]=='='){
        ans+=s[i];



        }
    }
    int n=ans.size();
    for(int i=0;i<n;i++){
        cout<<"oparetor "<<i+1<<" "<<ans[i]<<endl;
    }

}
int main(){
    outpute();
}
