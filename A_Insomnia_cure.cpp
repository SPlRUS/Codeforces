//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int k,l,m,n,d;
  cin>>k>>l>>m>>n>>d;
  int answer=d;
  for(int i=1;i<=d;i++){
    if(i%k&&i%l&&i%m&&i%n) answer--;
  }
  cout<<answer;
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}