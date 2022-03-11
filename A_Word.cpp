//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  string s;
  cin>>s;
  int upper=0,lower=0;
  for(char c:s){
      if(c>=65 && c<=90){
          upper++;
      }
      else
      {
          lower++;
      }      
  }
  if(upper>lower){
    transform(s.begin(),s.end(),s.begin(),::toupper);
  }
  else
  {
    transform(s.begin(),s.end(),s.begin(),::tolower);
  }
  cout<<s;
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}