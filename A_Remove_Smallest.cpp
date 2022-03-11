//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int t,n;
  cin>>t;
  while(t--){
      int flag=0;
      cin>>n;
      vector<int> v(n);
      for(int i=0;i<n;i++){
          cin>>v[i];
      }
      sort(v.begin(),v.end(),greater<int>());
      while(v.size()>1){
          if(v[0]-v[1]<=1){
              v.erase(v.begin());
          }
          else{
              flag=1;
              break;
          }
      }
      flag?cout<<"NO\n":cout<<"YES\n";
  }
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}