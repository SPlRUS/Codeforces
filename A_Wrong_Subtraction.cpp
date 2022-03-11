//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int n,k;
  cin>>n>>k;
  while(k--)
  (n%10==0)?n/=10:n--;
  cout<<n;
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}
