//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int t,answer=0;
  string curr,prev;
  cin>>t;
  while(cin>>curr){
      if(curr!=prev){
          answer++;
      }
      prev=curr;
  }
  cout<<answer;
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}