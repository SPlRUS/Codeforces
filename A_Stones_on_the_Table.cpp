//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int t,answer=0;
  char prev='\0',current='\0';
  cin>>t;
  while(t--){
      cin>>current;
      if(prev==current){
          answer++;
      }
      prev=current;
  }
  cout<<answer;
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}