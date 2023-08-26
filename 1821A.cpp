# include <bits/stdc++.h>
using namespace std;

int main(){
    int n,cnt;
    string str;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>str;
        cnt=0;
        for(int j=0; j<str.size(); j++){
            if(str[j]=='?'){
                cnt++;
            }
        }
        if(str[0]=='0'){
            cout<<0<<endl;
        }
        else if(str[0]!='?'){
            cout<<pow(10,cnt)<<endl;
        }
        else{
            cout<<pow(10,cnt)-pow(10,cnt-1)<<endl;
        }
    }
}