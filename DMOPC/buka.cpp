#include<bits/stdc++.h>

using namespace std;

int main(){
	cin.sync_with_stdio(0);
	cin.tie(NULL);
	int x, y;
	string o;
	cin >> x >> o >> y;

	if(o == "+"){
		cout << (x + y) << endl;
		return 0;
	}
	if(o == "*"){
		cout << (x * y) << endl;
		return 0;
	}
	return 0;

}
