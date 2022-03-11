//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int n,unnoticedCrimes=0,manpower=0;
  cin>>n;
  while(cin>>n){
      if(n>0) manpower+=n;
      else if(manpower>0) manpower--;
      else unnoticedCrimes++;
  }
  cout<<unnoticedCrimes;
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}