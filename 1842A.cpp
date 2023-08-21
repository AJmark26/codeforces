# include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,val,a,b,p1,p2;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>a>>b;
        p1=0;
        p2=0;
        for(int x=0; x<a; x++){
            cin>>val;
            p1+=val;
        }
        for(int y=0; y<b; y++){
            cin>>val;
            p2+=val;
        }

        if(p1-p2>0){
            cout<<"Tsondu"<<endl;
        }
        else if(p1-p2<0){
            cout<<"Tenzing"<<endl;
        }
        else{
            cout<<"Draw"<<endl;
        }
    }
}