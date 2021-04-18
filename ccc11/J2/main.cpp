#include<bits/stdc++.h>

using namespace std;


int alt(int h, int t){
  return (-6 * pow(t, 4)+ (h * pow(t,3))+ (2* pow(t, 2))+t);
}
int main(){
  int h, m;
  cin >> h >> m;
  for(int i = 1; i <= m; i++){
    if(alt(h, i) <= 0){
      cout << "The balloon first touches ground at hour:\n" << i << endl;
      return 0;
    }
  }
  cout << "The balloon does not touch ground in the given time." << "\n";
  return 0;
}
