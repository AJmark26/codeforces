# include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,t,a,b;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>k>>t;
        
        vector<int> A;
        vector<int> B;

        for(int x=0; x<k; x++){
            cin>>a;
            A.push_back(a);
        }
        for(int x=0; x<k; x++){
            cin>>b;
            B.push_back(b);
        }

        pair<int,int> p = make_pair(-1,0);
        for(int j=0; j<k; j++){
            if(A[j]+j<=t && p.second<B[j]){
                p = make_pair(j+1,B[j]);
            }
        }
        cout<<p.first<<endl;
    }
}