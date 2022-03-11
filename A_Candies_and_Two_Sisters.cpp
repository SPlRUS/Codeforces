//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int t;
  long int n;
  cin>>t;
  while(cin>>n){
      if(n<3)cout<<0<<'\n';
      else if(n%2==0) cout<<n/2-1<<'\n';
      else cout<<n/2<<'\n';
  }
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}