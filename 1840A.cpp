# include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n;
    char ch;
    string str,ans;

    for(int i=0; i<n; i++){
        cin>>k;
        cin>>str;
        ans = "";
        ch = '0';
        for(int j=0; j<k; j++){
            if(ch=='0'){
                ch = str[j];
                continue;
            }
            if(ch==str[j]){
                ans+=ch;
                ch = '0';
            }
        }
        cout<<ans<<endl;
    }
}