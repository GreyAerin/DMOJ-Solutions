#include<bits/stdc++.h>
#define ll long long
const ll MAXN = 2e6+5;

using namespace std;

int main(){
  cin.sync_with_stdio(0);
  cin.tie(NULL);
  string s;
  stack<string>o;
  while(cin >> s){
    if(s != "SCHOOL"){
      o.push(s);
    }
  }
  int size = o.size();
  for(int i = 0; i < size; i++){
    // cout << o.top();
    if(o.top() == "R"){
      o.pop();
      if(o.size() > 0){
        cout << "Turn LEFT onto " << o.top() << " street. " << endl;
        o.pop();
      }else{
        cout << "Turn LEFT into your HOME." << endl;
        return 0;
      }
    }
    if(o.top() == "L"){
      o.pop();
      if(o.size() > 0){
        cout << "Turn RIGHT onto " << o.top() << " street. " << endl;
        o.pop();
      }else{
        cout << "Turn RIGHT into your HOME." << endl;
        return 0;
      }
    }
  }
  return 0;
}
