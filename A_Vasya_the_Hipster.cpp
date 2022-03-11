//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int a,b,c=0,d=0;
  cin>>a>>b;
  while(a+b>1){
      if(a>0 && b>0){
          a--;b--;
          c++;
      }
      else if(a==0 && b>1){
          b-=2;
          d++;
      }
      else if(a>1 && b==0){
          a-=2;
          d++;
      }
  }
  cout<<c<<" "<<d;
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}