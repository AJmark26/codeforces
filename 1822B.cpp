# include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,p;
    cin>>n;
    long long a,ans;

    for(int i=0; i<n; i++){
        cin>>p;
        k=p;
        vector<long long> v;
        for(int j=0; j<k; j++){
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        ans = max(v[0]*v[1],v[p-1]*v[p-2]);
        cout<<ans<<endl;
    }
}