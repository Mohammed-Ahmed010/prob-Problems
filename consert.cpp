#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,m;
    cin>>n>>m;;
    multiset<int>s;
    int k;
    for(int i=0;i<n;i++){
        cin>>k;
        s.insert(k);
    }

    for(int i=0;i<m;i++){
        cin>>k;
        auto it=s.upper_bound(k);
        if(it==s.begin()) cout<<-1<<endl;
        else {
            cout<<*(--it)<<endl;
            s.erase(it);
            }
    }

    return 0;
}