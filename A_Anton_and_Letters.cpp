//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  char c;
  set<char> s;
  while(cin>>c){
      if(c>=97 && c<=122) s.insert(c);
  }
  cout<<s.size();
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}