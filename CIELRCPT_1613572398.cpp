#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	int t;
	cin >> t;
	while(t-- > 0){
		int arr[12] = {0};
		arr[0] = 1;
		arr[1] = 2;
		arr[2] = 4;
		arr[3] = 8;
		arr[4] = 16;
		arr[5] = 32;
		arr[6] = 64;
		arr[7] = 128;
		arr[8] = 256;
		arr[9] = 512;
		arr[10] = 1024;
		arr[11] = 2048;
		int p;
		cin >> p;
		int times = 0;
		for(int i = 12 ; i >= 0 ;){
			if(p - arr[i] > 0){
				p = p - arr[i];
				times++;
			}else if(p - arr[i] < 0){
				i--;
			}
			else if(p - arr[i] == 0){
				times++;
				break;
			}
		}
		cout << times << endl;
	}
	return 0;
}