//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int t,ai,bi,n=0,capacity=0;
  cin>>t;
  while (t--)
  {
      cin>>ai>>bi;
      n=n+bi-ai;
      capacity=max(capacity,n);
  }
  cout<<capacity;
  
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}