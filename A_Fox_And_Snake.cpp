//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int r,c;
  vector<string> v(3);
  cin>>r>>c;
  for(int i=0;i<c;i++){
      v[0]+="#";
      i==c-1?v[1]+="#":v[1]+=".";
      i==0?v[2]+="#":v[2]+=".";
  }
  int flag=0;
  for(int i=0;i<r;i++){
      if(i%2==0){
          cout<<v[0]<<'\n';
      }
      else if(!flag){
          cout<<v[1]<<'\n';
          flag=1;          
      }
      else{
          cout<<v[2]<<'\n';
          flag=0;
      }
  }
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}