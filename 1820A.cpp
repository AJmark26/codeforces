# include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,cnt;
    string str;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>str;
        k = str.size()-1;
        cnt=0;
        if(k==0 && str[k]=='^'){
            cout<<1<<endl;
        }
        else{
            for(int j=0; j<k; j++){
                if(str[j]=='_' && str[j+1]=='_'){
                    cnt++;
                }
            }
            if(str[0]=='_'){
                cnt++;
            }
            if(str[k]=='_'){
                cnt++;
            }

            cout<<cnt<<endl;
        }

    }
}