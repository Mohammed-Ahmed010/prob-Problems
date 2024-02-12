#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>4){
        for(int i=n;i>=2;i--){
            if((i%2)==0)
            cout<<i<<" ";
        }
        for(int i=n;i>=1;i--){
            if(i&1){
                cout<<i<<" ";
            }
        }

    }else if(n==1){
        cout<<1;
    }else if(n==4){
        cout<<"2 4 1 3";
    }
    else{
        cout<<"NO SOLUTION";
    }
    return 0;
}