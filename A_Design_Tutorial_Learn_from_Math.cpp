//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

bool isComposite(int n)
{
    // Corner cases
    if (n <= 1)  return false;
    if (n <= 3)  return false;
  
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return true;
  
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return true;
  
    return false;
}

void solution(){
  int n,flag=0;
  cin>>n;
  int a=4;
  while(!flag){
      if(isComposite(a)&&isComposite(n-a)){
          flag=1;
          break;
      }
      a++;
  }
  cout<<a<<" "<<n-a;
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}