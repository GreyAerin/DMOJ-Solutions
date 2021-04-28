#include<bits/stdc++.h>
#define ll long long
const ll MAXN = 2e6+5;

using namespace std;

int main(){
  cin.sync_with_stdio(0);
  cin.tie(NULL);
  int t;
  cin >> t;
  vector<char> output;
  for(int i =0; i < t; i++){
      int cNum, in;
      cin >> cNum;
      vector<int>mnt;
      vector<int>bnch;
      for(int j = 0; j < cNum; j++){
          cin >> in;
          mnt.push_back(in);
      }
      int car = cNum - 1;
      int order = 1;
      char state = 'Y';
      while (order <= cNum && state == 'Y'){
          if(car >= 0 && order == mnt[car]){
              car--;
              order++;
          }else if(bnch.size() > 0 && order == bnch.back()){
              bnch.pop_back();
              order++;
          }else if(car >= 0){
              bnch.push_back(mnt[car]);
              car--;
          }else{
              state = 'N';
          }
      }
      output.push_back(state);
  }
  for(char x: output){
      cout << x << endl;
  }
  return 0;
}
