//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  string s1,s2;
  cin>>s1>>s2;
  reverse(s2.begin(),s2.end());
  s1==s2?cout<<"YES":cout<<"NO";
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}