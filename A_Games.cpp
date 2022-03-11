//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int n,answer=0;
  cin>>n;
  int a[n][2];
  for(int i=0;i<n;i++){
      cin>>a[i][0]>>a[i][1];
  }
  for(int i=0;i<n;i++){
      int current=a[i][0];
      for(int j=0;j<n;j++){
          if(i==j) continue;
          if(current==a[j][1]) answer++;
      }
  }
  cout<<answer;
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}