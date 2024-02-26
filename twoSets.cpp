#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
int main(){
    int n;
    cin>>n;
    long long sum=(1ll * n * (1ll * n + 1)) / 2; 
 
    if(sum&1) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<"\n";
        long long maxEle=n;
        vector<int>a,b;
        vector<int>v(n+1,0);
 
        long long aSum=0;
        while(aSum<sum/2){
            long long rSum=(sum/2)-aSum;
            if(maxEle<rSum){
                a.push_back(maxEle);
                v[maxEle]=1;
                aSum+=maxEle;
                maxEle--;
            }else{
                a.push_back(rSum);
                v[rSum]=1;
                aSum=sum/2;
            }
        }
        for (int i = 1; i <= n; i++) { 
            if (v[i] == 0) { 
                b.push_back(i); 
            } 
        } 
  
      
        cout << a.size() << "\n"; 
        for (auto x : a) { 
            cout << x << " "; 
        } 
        cout << "\n"; 
  
       
        cout << b.size() << "\n"; 
        for (auto x : b) { 
            cout << x << " "; 
        } 
 
 
    }
    return 0;
}
