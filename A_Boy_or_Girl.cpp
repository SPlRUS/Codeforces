//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  string st;
  cin>>st;
  int size=st.length();
  set<char> s;
  for(int i=0;i<st.length();i++){
      s.insert(st[i]);
  }
  if(s.size()%2==0)
  cout<<"CHAT WITH HER!";
  else
  cout<<"IGNORE HIM!";
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}