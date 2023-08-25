# include <bits/stdc++.h>
using namespace std;

int main(){
    int n,cnt;
    cin>>n;
    string str;

    for(int i=0; i<n; i++){
        cin>>str;
        cnt=0;
        if(str.size()%2){
            for(int j=1; j<str.size()/2 +1; j++){
                if(str[j]!=str[j-1]){
                    cnt++;
                    break;
                }
            }
        }
        else{
            for(int j=1; j<str.size()/2; j++){
                if(str[j]!=str[j-1]){
                    cnt++;
                    break;
                }
            }
        }

        if(cnt>0){
            cout<<str.size()-1<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}