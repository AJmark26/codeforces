# include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,val,ans;
    cin>>n;

    for(int i=0; i<n; i++){
        vector<int> v;
        cin>>k;
        ans=0;
        for(int j=0; j<k; j++){
            cin>>val;
            v.push_back(val);
        }

        sort(v.begin(),v.end());
        for(int a=0; a<k/2; a++){
            ans += v[k-1-a]-v[a]; 
        }
        cout<<ans<<endl;
    }
}