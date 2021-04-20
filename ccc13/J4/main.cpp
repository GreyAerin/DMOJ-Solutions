#include<bits/stdc++.h>
#define ll long long
const ll MAXN = 2e6+5;

using namespace std;

int main(){
  cin.sync_with_stdio(0);
  cin.tie(NULL);
  int n, r, c, s =0;
  cin >> n >> r;
  vector<int> t;
  for(int i = 0; i < r; i++){
    cin >> c;
    t.push_back(c);
  }
  sort(t.begin(), t.end());
  for(int i = 1; i <= t.size() ; i++ ){
    s += t[i-1];
    if(s > n){
      cout << i-1 << endl;
      return 0;
    }
  }
  cout << t.size();

  return 0;
}
