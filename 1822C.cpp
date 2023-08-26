# include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long k;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>k;
        cout<<(4*k) + ((k-1)*(k))/2 + ((k-2)*(k-1))/2 + 1<<endl;
    }
}