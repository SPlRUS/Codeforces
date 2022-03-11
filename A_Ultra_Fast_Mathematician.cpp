//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  string n1,n2;
  cin>>n1>>n2;
  for(int i=0;i<n1.length();i++){
      n1[i]==n2[i]?cout<<0:cout<<1;
  }
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}