//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int n,a=0,d=0;
  char c;
  cin>>n;
  while(cin>>c){
      c=='A'?a++:d++;
  }
  a==d?cout<<"Friendship":a>d?cout<<"Anton":cout<<"Danik";
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}