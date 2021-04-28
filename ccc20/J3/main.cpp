#include<bits/stdc++.h>
#define ll long long
const ll MAXN = 2e6+5;

using namespace std;

int main(){
  cin.sync_with_stdio(0);
  cin.tie(NULL);
  int n, x, y, max_x = 0, max_y = 0, min_x = 101, min_y = 101;
  cin >> n;
  string s, s1;
  while (cin >> s){
      //cin >> s >> s1;
      //cout << s.substr(s.find_first_of(",")+1) << endl;
      x = stoi(s.substr(0, s.find_first_of(",")));
      y = stoi(s.substr(s.find_first_of(",")+1));
      max_x = max(x, max_x);
      max_y = max(y, max_y);
      min_x = min(x, min_x);
      min_y = min(y, min_y);
      n--;
  }
  cout << min_x -1 << "," << min_y-1 << endl;
  cout << max_x+1 << "," << max_y+1 << endl;
  return 0;
}
