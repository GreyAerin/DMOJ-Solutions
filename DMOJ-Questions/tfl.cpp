#include<bits/stdc++.h>

using namespace std;

int main(){
	cin.sync_with_stdio(0);
	cin.tie(NULL);
	int l, n;
	cin >> n;
//	cout << (int)pow(192, 3)%1000;
	for(int j = 0; j < n; j++){
		cin >> l;
		for(int i = l;; i++){
		
			if((int)pow(i, 3) % 1000 == 888){
				cout << i << endl;
				break;	
			}
		}
	}
	return 0;
}
