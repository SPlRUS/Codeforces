//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  string guest,host,currentPile;
  cin>>guest>>host>>currentPile;
  string expectedPile=guest+host;
  sort(expectedPile.begin(),expectedPile.end());
  sort(currentPile.begin(),currentPile.end());
  if(currentPile==expectedPile) cout<<"YES";
  else cout<<"NO";
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}