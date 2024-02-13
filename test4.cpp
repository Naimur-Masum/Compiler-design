#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    if((s[0]>='a' && s[0]<='z') ||(s[0]>='A'&&s[0]<='Z')||s[0]=='_'){
            if((s[1]>='a' && s[1]<='z') ||(s[1]>='A'&&s[1]<='Z')||s[0]=='_'||(s[1]>='0'&&s[1]<='9')){
                cout<<"ditected"<<endl;
            }
            else cout<<"not ditected"<<endl;


    }
    else cout<<"not ditected"<<endl;


}
