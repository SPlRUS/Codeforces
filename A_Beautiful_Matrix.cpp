//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int input;
  for(int i=0;i<5;i++)
  {
      for(int j=0;j<5;j++){
          cin>>input;
          if(input){
              cout<<abs(2-i)+abs(2-j);
              break;
          }
      }
  } 
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}