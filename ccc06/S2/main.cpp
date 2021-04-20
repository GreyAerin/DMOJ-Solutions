#include<bits/stdc++.h>
#define ll long long
const ll MAXN = 2e6+5;

using namespace std;

int main(){
  cin.sync_with_stdio(0);
  cin.tie(NULL);
  map<char, string>key;
  string in, c, d;
  getline(cin, in);
  getline(cin, c);
  getline(cin, d);
  for(int i = 0; i < in.length(); i++){
    key[c[i]] = in[i];
  }
  for(int i =0; i < d.length(); i++ ){
    if(key.find(d[i]) != key.end()){
      string s = key[d[i]];
      d.replace(i, 1, s);
    }else{
      d.replace(i, 1, ".");
    }
  }
  cout << d << endl;
  return 0;
}
