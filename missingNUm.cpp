#include<bits/stdc++.h> 
using namespace std;

int main(){
long long n,sum=0,k,sum1;
    cin>>n;
for(int i=0;i<(n-1);i++){
    cin>>k;
    sum+=k;
}
    sum1=(n*(n+1))/2;
    cout<<sum1-sum<<"\n";


    return 0;

}