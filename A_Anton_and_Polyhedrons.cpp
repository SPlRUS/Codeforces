//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int n,answer=0;
  string s;
  cin>>n;
  while(n--){
      cin>>s;
      switch(s[0]){
      case 'T': answer+=4;
      break;
      case 'C': answer+=6;
      break;
      case 'O': answer+=8;
      break;
      case 'D': answer+=12;
      break;
      case 'I': answer+=20;
      break;
      }
  }
  cout<<answer;
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}