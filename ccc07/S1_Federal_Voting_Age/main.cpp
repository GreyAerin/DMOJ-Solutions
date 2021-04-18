#include<bits/stdc++.h>

using namespace std;

int main(){
  cin.sync_with_stdio(0);
  cin.tie(0);
  int n, y, m, d;
  vector<bool>ans;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> y >> m >> d;
    if(y < 1989){
      ans.push_back(true);
    }else if(y > 1989){
      ans.push_back(false);
    }else if(y == 1989){
      if(m < 2){
        ans.push_back(true);
      }else if(m > 2){
        ans.push_back(false);
      }else if(m == 2){
        if(d <= 27){
          ans.push_back(true);
        }else{
          ans.push_back(false);
        }
      }
    }
  }
  for(int i =0; i < ans.size(); i++){
    if(ans.at(i)){
      cout << "Yes" << endl;
    }else{
      cout << "No"<<endl;
    }
  }
  return 0;
}
