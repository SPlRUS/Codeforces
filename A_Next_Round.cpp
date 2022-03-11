//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int n,k;
  int answer=0;
  cin>>n>>k;
  vector<int> v(n);
  for(int i=0;i<n;i++){
      cin>>v[i];
  }
  for(int i:v){
      if(i>=v[k-1] && i!=0)
      answer++;
  }
  cout<<answer;
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}