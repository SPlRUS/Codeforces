//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int n,temp;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
      cin>>temp;
      a[temp-1]=i+1;
  }
  for(int i:a){
      cout<<i<<" ";
  }
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}