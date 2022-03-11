//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int n,t,just_changed;
  string s;
  cin>>n>>t;
  cin>>s;
  while(t--){
      just_changed=0;
      for(int i=1;i<n;i++){
          if(s[i-1]=='B' && s[i]=='G' && !just_changed){
              s[i-1]='G';
              s[i]='B';
              just_changed=1;
          }
          else{
              just_changed=0;
          }
      }
  }
  cout<<s;
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}