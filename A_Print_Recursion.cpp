//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void f(int n){
    if(n==0) return;
    cout<<"I love Recursion"<<endl;
    f(n-1);
}

void solution(){
    int n;
    cin>>n;
    f(n);
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}