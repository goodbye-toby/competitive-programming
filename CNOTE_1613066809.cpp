#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t-- > 0){
		int x , y , k , n;
		cin >> x >> y >> k >> n;
		bool ans = false;
		int req = (x - y);
		for(int i = 0 ; i < n ; i++){
			int pages , price;
			cin >> pages >> price;
			if(price <= k and pages >= req) ans = true;
		}
		if(ans) cout << "LuckyChef" << endl;
		else cout << "UnluckyChef" << endl;
	}

	return 0;
}