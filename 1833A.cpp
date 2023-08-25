# include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    string st,s1,s2;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>k;
        cin>>st;
        map<string,bool> cnt;
        for(int j=1; j<st.size(); j++){
            s1 = st.substr(j-1,2);
            if(!cnt[s1]){
                cnt[s1] = true;
            }
            if(j==st.size()-1){
                continue;
            }
            s2 = st.substr(j,2);
            if(!cnt[s2]){
                cnt[s2] = true;
            }
        }
        cout<<cnt.size()<<endl;
    }
}