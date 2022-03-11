//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int t;
  cin>>t;
  long int a,b,answer;
  while(t--){
      answer=0;
      cin>>a>>b;
      if(a%10==b%10){
          answer=abs(a-b)/10;
      }
      else
      {
          answer=(abs(a-b)/10)+1;
      }      
      cout<<answer<<'\n';
  }
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}