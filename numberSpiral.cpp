#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t,x,y,r;
    cin>>t;
    while(t--){
        cin>>x>>y;
        if(x<y){
            if(y&1){
                r=y*y;
                cout<<r-x+1<<endl;
            }else{
                r=(y-1)*(y-1) +1;
                cout<<r+x-1<<endl;
            }
        }else{
            if(!(x&1)){
                r=x*x;
                cout<<r-y+1<<endl;
            }else{
                r=(x-1)*(x-1)+1;
                cout<<r+y-1<<endl;
            }
        }
    }
    return 0;
}