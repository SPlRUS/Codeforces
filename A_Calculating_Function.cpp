//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  ll n;
  cin>>n;
  //cout<<n/2-(n%2)*n;
  n%2?cout<<n/2*(n/2+1)-(n/2+1)*(n/2+1):cout<<n/2*(n/2+1)-(n/2)*(n/2);
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}