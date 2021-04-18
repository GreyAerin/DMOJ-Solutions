#include<bits/stdc++.h>

using namespace std;

int main(){
  cin.sync_with_stdio(0);
  cin.tie(0);
  string in;
  char prev = 'A';
  int e = 0;
  vector<int> n;
  cin >> in;
  map<char, int> num;
  num['I'] = 1;
  num['V'] = 5;
  num['X'] = 10;
  num['L'] = 50;
  num['C'] = 100;
  num['D'] = 500;
  num['M'] = 1000;

  for(int i = 0; i < in.size(); i++){
    if(i % 2 == 0){
      n.push_back(in[i]-'0');
    }
    if(i % 2 == 1){
      if(prev == 'A'){
        prev = in[i];
      }else{
        if(num[prev] < num[in[i]]){
          n.at((i/2)-1) *= -1;
        }
      }
      prev = in[i];
    }
  }
  for(int i = 0; i < n.size(); i++){
    e += (n[i] * num[in[(i*2)+1]]);
  }
  cout << e << '\n';
  return 0;
}
