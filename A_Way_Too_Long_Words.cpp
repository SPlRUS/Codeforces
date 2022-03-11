//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
      string s;
      cin>>s;
      if(s.size()<=10){
          cout<<s<<endl;
      }
      else{
          cout<<s[0]<< s.size()-2 <<s[s.size()-1]<<endl;
      }
  }

}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}