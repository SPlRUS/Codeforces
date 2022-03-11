//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int k,r,amount=0,answer=1;
  cin>>k>>r;
  amount=k;
  while(amount%10!=0 && amount%10!=r){
      amount+=k;
      answer++;
  }
  cout<<answer;
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}