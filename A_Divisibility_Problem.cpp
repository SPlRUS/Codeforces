//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int n;
  ll a,b,answer;
  cin>>n;
  while(n--){
    cin>>a>>b;
    if(a%b==0) cout<<0<<'\n';
    else cout<< (a-(a%b)+b)-a<<'\n';
  }
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}