//Author: Spirus
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

void solution(){
    string s;
    cin>>s;
    if(s.length()==1){
        cout<<s;
    }
    else{
    s.erase(remove(s.begin(),s.end(),'+'), s.end());
    sort(s.begin(),s.end());
    for(int i=1;i<s.length();i+=2){
            s.insert(i,"+");
    }
    cout<<s<<endl;
    }
}
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL);
solution();
return 0;
}