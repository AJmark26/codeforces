# include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,a,s1,s2,sAll,ans1,ans2;
    cin>>n;
    string str;

    for(int i=0; i<n; i++){
        cin>>k;
        s1=INT_MAX;
        s2=INT_MAX;
        sAll=INT_MAX;

        for(int j=0; j<k; j++){
            cin>>a;
            cin>>str;
            if(str[0]=='1' && str[1]=='1'){
                sAll = min(sAll,a);
            }
            else if(str[0]=='1' && str[1]=='0'){
                s1 = min(s1,a);
            }
            else if(str[0]=='0' && str[1]=='1'){
                s2 = min(s2,a);
            }
            else{
                continue;
            }
        }

        if(s1!=INT_MAX && s2!=INT_MAX){
            ans1 = s1+s2;
        }
        else{
            ans1 = INT_MAX;
        }
        ans2 = sAll;

        if(ans1!=INT_MAX && ans2!=INT_MAX){
            if(ans1>ans2){
                cout<<ans2<<endl;
            }
            else{
                cout<<ans1<<endl;
            }
        }
        else if(ans1==INT_MAX && ans2!=INT_MAX){
            cout<<ans2<<endl;
        }
        else if(ans1!=INT_MAX && ans2==INT_MAX){
            cout<<ans1<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}