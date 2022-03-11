//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int y;
  cin>>y;
  while(1){
      set<int> s;
      int temp=++y;
      while(temp){
          s.insert(temp%10);
          temp/=10;
      }
      if(s.size()==4){
          break;
      }
  }
  cout<<y;
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}