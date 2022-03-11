//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int t,opinion,flag=0;
  cin>>t;
  while(cin>>opinion)if(opinion)flag=1;
  flag?cout<<"HARD":cout<<"EASY";
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}