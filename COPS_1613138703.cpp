#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t-- > 0){
		int m , x, y;
		cin >> m >> x >> y;
		bool safe[100];
		for(int i = 0 ; i < 100 ; i++){
			safe[i] = true;
		}
		while(m-- > 0){
			int pos;
			cin >> pos;
			int left = pos - (x * y);
			left = left < 1 ? 1 : left;
			int right = pos + (x * y);
			right = right > 100 ? 100 : right;
			for(int i = left ; i <= right ; i++){
				safe[i-1] = false;
			}
		}
		int count = 0;
		for(int i = 0 ; i < 100 ; i++){
			if(safe[i]) count++;
		}
		cout << count << endl;
	}
	return 0;
}