//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int n,min,max,maxpos,minpos;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++){
      cin>>v[i];
  }
  min=*min_element(v.begin(),v.end());
  max=*max_element(v.begin(),v.end());
  for(int i=0;i<n;i++){
      if(v[i]==max){
          maxpos=i;
          break;
      }
  }
  for(int i=n-1;i>=0;i--){
      if(v[i]==min){
          minpos=i;
          break;
      }
  }
  if(maxpos<minpos)
  cout<<maxpos+((n-1)-(minpos));
  else
  cout<<maxpos+((n-1)-(minpos))-1;
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}