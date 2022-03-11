//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int t,n;
  cin>>t;
  while(t--){
      vector<int> v;
      cin>>n;
      int m=10;
      while(n){
          if(n%m)
          {
            v.push_back(n%m);
            n-=n%m;
          }
          m*=10;
      }
      cout<<v.size()<<'\n';
      for(int i:v) cout<<i<<" ";
      cout<<'\n';
  }
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}