//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  long int n;
  int answer=0;
  cin>>n;
  while(n){
      if(n%100==0){
          n-=100;
          answer++;
      }
      else if(n%20==0){
          n-=20;
          answer++;
      }
      else if(n%10==0){
          n-=10;
          answer++;
      }
      else if(n%5==0){
          n-=5;
          answer++;
      }
      else{
          n-=1;
          answer++;
      }
  }
  cout<<answer;
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}