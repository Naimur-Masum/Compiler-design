#include<bits/stdc++.h>
using namespace std;

bool keyWord(string user_input){
    string filename="input.txt";

    ifstream file(filename);

    string line;

    while (getline(file, line)) {

        if (line.find(user_input) != string::npos) {
            file.close();
            return 0;
        }
    }

    file.close();
    return 1;
}

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
    if(!keyWord(var)){
            cout << "Invalid for '" << var << "' keyword." << endl;
        return 0;
    }

    else {

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
                cout<<"Invalide for number"<<c<<endl;
        return false;

    }
    }
    else{
            cout<<"invalide for "<<var[0]<<endl;
            return false;
    }
    }
}


int main(){
    char c;
    string s;
    cin>>s;
    if(isValidIdentifier(s)){
        cout<<"Input is valid";
    }

}
