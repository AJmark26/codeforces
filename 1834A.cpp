# include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,val,plus,minus,ans;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>k;

        plus=0;
        minus=0;
        ans=0;
        for(int j=0; j<k; j++){
            cin>>val;
            if(val==1){
                plus++;
            }
            else{
                minus++;
            }
        }

        if(plus>=minus){
            if(minus%2){
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
        else{
            if(k%2 || (k/2)%2){
                ans = k/2-plus+1;
                if((minus-ans)%2){
                    cout<<ans+1<<endl;
                }
                else{
                    cout<<ans<<endl;
                }
            }
            else{
                cout<<(k/2)-plus<<endl;
            }
        }

    }
}