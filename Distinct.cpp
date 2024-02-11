#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,k;
    cin>>n;
    set<long long>s;
    for(int i=0;i<n;i++){
        cin>>k;
        s.insert(k);
    }
    cout<<s.size();
    return 0;

}