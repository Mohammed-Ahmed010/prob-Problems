#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,prev=0,k,ans=0;
    cin>>n;
    while(n--){
        cin>>k;
        if((k-prev)<0){
            ans+=(prev-k);
            k+=(prev-k);
        }
        prev=k;

    }
    cout<<ans;
    return 0;
}