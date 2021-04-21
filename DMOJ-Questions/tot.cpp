#include<bits/stdc++.h>
#define ll long long
const ll MAXN = 2e6+5;

using namespace std;

int main(){
  cin.sync_with_stdio(0);
  cin.tie(NULL);
  int n, d, t, tt = 0, i=0;
  cin >> n >> d;
  while(tt < d){
	  i++;
    cin >> t;
    tt+=t+1;
    if(tt >= d){
     cout << i << endl;
     return 0;
    }
  }

  return 0;
}
