//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int t;
  cin>>t;
  while(t--){
      string s,answer="";
      cin>>s;
      for(int i=0;i<s.length()-1;i+=2){
          answer.push_back(s[i]);
      }
      cout<<answer+s[s.length()-1]<<"\n";
  }
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}