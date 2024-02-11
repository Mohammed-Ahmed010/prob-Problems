#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,k;
    cin>>n>>m>>k;
    vector<long long>a(n);
    vector<long long>b(m);
    for(int i=0;i<n;i++) 
        cin>>a[i];
    for(int j=0;j<m;j++) 
        cin>>b[j];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int j=0,c=0;
    for(int i=0;i<n;i++){
        while(j<m){
            int maxi=b[j]+k;
            int mini=b[j]-k;
            if(maxi<a[i]) j++;
            else if(mini>a[i]) break;
            else{
                j++;
                c++;
                break;
            }


        }
    }
    cout<<c;
    return 0;

}