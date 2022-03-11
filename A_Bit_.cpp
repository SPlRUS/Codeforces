//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int t,answer=0;
  string s;
  cin>>t;
  while(t--){
      cin>>s;
      if(s=="++X" || s=="X++")
      answer++;
      else
      answer--;
  }
  cout<<answer;
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}