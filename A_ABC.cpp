//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int t;
  cin>>t;
  while(t--){
      int n;
      string s;
      cin>>n;
      cin>>s;
      (s=="0"||s=="1"||s=="01"||s=="10")?cout<<"YES\n":cout<<"NO\n";
    }
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}