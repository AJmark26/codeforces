# include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str;

    for(int i=0; i<n; i++){
        cin>>str;
        if(str.size()==3){
            cout<<"NO"<<endl;
            continue;
        }
        bool sv = false;
        for(int j=0; j<str.size()/2 -1; j++){
            if(str[j+1]!=str[j]){
                sv = true;
                break;
            }
        }
        if(sv){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}