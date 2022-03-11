//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  string s;
  cin>>s;
  if((int)s[0]<=90){
      cout<<s;
  }
  else{
      cout<<(char)((int)s[0]-32)<<s.substr(1,s.length()-1);
  }
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}