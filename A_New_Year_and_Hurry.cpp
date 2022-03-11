//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int n,k,timeForContest,answer=0;
  cin>>n>>k;
  timeForContest=240-k;
  for(int i=1;i<=n;i++){
      timeForContest=timeForContest-(5*i);
      if(timeForContest<0){
          break;
      }
      answer++;
  }
  cout<<answer;
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}