//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int count=0;
  char c;
  while(cin>>c){
      if(c=='4'||c=='7')count++;
  }
  (count==4 || count==7)?cout<<"YES":cout<<"NO";
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}