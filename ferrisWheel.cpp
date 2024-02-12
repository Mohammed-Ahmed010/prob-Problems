#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,w;
    cin>>n>>w;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+(sizeof(arr)/sizeof(arr[0])));
    long long g=1,i=0,j=n-1;

    while(i<j){
        if(arr[i]+arr[j]<=w){
            i++;
            j--;
            n--;
        }else{
            j--;
        }
       

    }

cout<<n;
return 0;
}