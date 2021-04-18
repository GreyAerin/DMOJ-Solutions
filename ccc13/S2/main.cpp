#include<bits/stdc++.h>
using namespace std;

int main(){
  int m, c, x = 1, w = 0, t, tc = 0;
  queue<int> pastBridge;
  queue<int> onBridge;
  queue<int> preBridge;
  scanf("%d %d", &m, &c);
  for (int i = 0; i < c; i++){
      scanf("%d", &x);
      preBridge.push(x);
  }
  x = 0;
  for(int i = 0; i < c; i++){
    onBridge.push(preBridge.front());
    preBridge.pop();
    for(int j = 0; j < onBridge.size(); j++){
      while(onBridge.size() != 0){
      int e = onBridge.front();
      w+=e;
      pastBridge.push(onBridge.front());
      onBridge.pop();
      if(x >= 4 && pastBridge.size() != 0){
        t = pastBridge.front();
        pastBridge.pop();
        w -= t;
        cout <<"W: " << w+t << "T: " << t << endl;
      }
      if(w <= m){
        cout << "W: " << w << endl;
        tc++;
      }else{
        cout << tc;
        return 0;
      }
      x++;
    }
  }
  }
  cout << tc;
  return 0;
}
