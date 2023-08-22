# include <bits/stdc++.h>
using namespace std;

bool solve(int x,int k,vector<int> &jump){
    if(x==0){
        return true;
    }
    if(x<0){
        return false;
    }

    bool ans = false;
    for(int i=x; i>0; i--){
        if(i%k!=0){
            ans = solve(x-i,k,jump);
        }
        if(ans){
            jump.push_back(i);
            break;
        }
    }
    return ans;
}

int main(){
    int n,x,k;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x>>k;
        vector<int> jump;
        bool ans = solve(x,k,jump);
        if(ans){
            cout<<jump.size()<<endl;
            for(auto j : jump){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
}