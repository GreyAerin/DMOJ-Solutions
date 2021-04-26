#include<bits/stdc++.h>
#include<cmath>
#define ll long long
const ll MAXN = 2e6+5;

using namespace std;

int main(){
  cin.sync_with_stdio(0);
  cin.tie(NULL);
  int n, z;
  vector<int> x;
  cin >> n;
  for(int i =0; i < n; i++){
    cin >> z;
    x.push_back(z);
  }
  sort(x.begin(), x.end());
  int mid;
  if(n%2 != 0){
	  mid = ceil(n/2);
	  cout << x[mid] << endl;
	  return 0;
  }else{
	  mid = n/2;
	  cout << round(((x[mid-1] + x[mid] )/ 2.0)) << endl;
	  return 0;
  }
}
