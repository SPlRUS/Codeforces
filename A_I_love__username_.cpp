//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int n,points,worst,best,answer=0;
  cin>>n;
  for(int i=0;i<n;i++){
      if(i==0){
          cin>>points;
          best=worst=points;
      }
      cin>>points;
      points>best?best=points,answer++:0;
      points<worst?worst=points,answer++:0;
  }
  cout<<answer;
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}