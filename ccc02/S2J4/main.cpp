#include<bits/stdc++.h>

using namespace std;

int main(){
  cin.sync_with_stdio(0);
  cin.tie(0);
  int n, d;
  cin >> n >> d;
  if(n/d == 0 && n != 0){
    int x, a, b;
    x = __gcd(n, d);
    a = n / x;
    b = d / x;
    cout << a << "/" <<b <<endl;
  }else if(n == 0){
    cout << 0 << endl;
  }
  else if(n%d != 0){
    int x, a, b;
    x = __gcd(n, d);
    a = (n%d)/x;
    b = d/x;
    cout << n/d << " " << a << "/" << b << endl;
  }else{
    cout << n/d << endl;
  }
  return 0;
}
