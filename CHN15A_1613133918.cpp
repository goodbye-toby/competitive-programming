#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t-- > 0){
		int n , k;
		cin >> n >> k;
		int count = 0;
		for(int i = 0 ; i < n ; i++){
			int no = 0;
			cin >> no;
			if((no + k)%7 == 0) count+=1;
		}
		cout << count << endl;
	}
	return 0;
}