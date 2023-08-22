# include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,val,odd,even,c1,c2;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>k;
        c1=0;
        c2=0;
        odd = INT_MAX;
        even = INT_MAX;
        for(int j=0; j<k; j++){
            cin>>val;
            if(val%2){
                c1++;
                odd = min(odd,val);
            }
            else{
                c2++;
                even = min(even,val);
            }
        }

        if(c1==k || c2==k){
            cout<<"YES"<<endl;
        }
        else{
            if(odd<even){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}
