#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,q,ar,b,sum=0;
    cin>>n>>q;
    vector<long long>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        a[i]+=a[i-1];
    }
    while(q--){
        cin>>ar>>b;
        cout<<a[b]-a[ar-1]<<"\n";
    }

    return 0;
}