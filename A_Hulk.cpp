//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  string s="";
  int i=1,n;
  for(cin>>n;i<=n;i++){
      i%2?s+="I hate that ":s+="I love that ";
  }
  for(int i=0;i<s.length()-5;i++){
      cout<<s[i];
  }
  cout<<"it";
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}