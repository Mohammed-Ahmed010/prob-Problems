#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[]={0,0,0,0};
    string s;
    cin>>s;
    int maxA=0,maxC=0,maxG=0,maxT=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='A'){
            arr[0]+=1;
            arr[1]=0;
            arr[2]=0;
            arr[3]=0;
            maxA=max(maxA,arr[0]);       
        }else if(s[i]=='C'){
            arr[1]+=1;
            arr[0]=0;
            arr[2]=0;
            arr[3]=0;
            maxC=max(maxC,arr[1]); 
        }else if(s[i]=='G'){
            arr[2]+=1;
            arr[0]=0;
            arr[1]=0;
            arr[3]=0;
            maxG=max(maxG,arr[2]); 
        }else{
            arr[3]+=1;
            arr[0]=0;
            arr[1]=0;
            arr[2]=0;
            maxT=max(maxT,arr[3]); 

        }
       

    }
    maxA=max(maxA,maxC);
    maxG=max(maxG,maxT);
      
  cout<<max(maxA,maxG)<<" ";


}