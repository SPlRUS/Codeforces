//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int k,n,w;
  int answer=0;
  cin>>k>>n>>w;
  for(int i=1;i<=w;i++){
      n=n-i*k;
      if(n<0){
          answer+=abs(n);
          n=0;
      }
  }
  cout<<answer;
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}