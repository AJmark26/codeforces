# include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,cnt,mx,a;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>k;
        cnt=0;
        mx = 0;
        for(int j=0; j<k; j++){
            cin>>a;
            if(a==0){
                cnt++;
            }
            else{
                mx = max(mx,cnt);
                cnt=0;
            }
        }
        mx = max(mx,cnt);
        cout<<mx<<endl;
    }
}