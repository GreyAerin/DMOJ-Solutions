#include<bits/stdc++.h>
#define ll = long long;
const int MAX_N = 1e6+1;

using namespace std;

int main(){
  cin.sync_with_stdio(0);
  cin.tie(0);
  string s;
  cin >> s;
  int a, b, c, d;
  int n[2][2];
  n[0][0] = 1;
  n[0][1] = 2;
  n[1][0] = 3;
  n[1][1] = 4;
  for(char x: s){
    a = n[0][0];
    b = n[0][1];
    c = n[1][0];
    d = n[1][1];
    if(x == 'H'){
      n[0][0] = c;
      n[1][0] = a;
      n[0][1] = d;
      n[1][1] = b;
    }else if(x = 'V'){
      n[0][0] = b;
      n[1][0] = d;
      n[0][1] = a;
      n[1][1] = c;
    }
  }
  cout << n[0][0] <<" " << n[0][1] << endl <<  n[1][0] <<" "<< n[1][1] << endl;

  return 0;
}
