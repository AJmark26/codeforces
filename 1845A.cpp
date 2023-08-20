# include <bits/stdc++.h>
using namespace std;

bool solve(int n,int k,int x,vector<int> &v){
    if(n==0){
        return true;
    }
    if(n<0){
        return false;
    }
    
    bool sv;
    for(int i=k; i>0; i--){
        if(i!=x){
            sv = solve(n-i,k,x,v);
        }
        if(sv){
            v.push_back(i);
            break;
        }
    }
    return sv;
    
}

int main(){
    int a,n,k,x;
    cin>>a;

    for(int i=0; i<a; i++){
        cin>>n>>k>>x;
        vector<int> v;
        bool ans = solve(n,k,x,v);
        if(ans){
            cout<<"YES"<<endl;
            cout<<v.size()<<endl;
            for(auto i : v){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}