#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	int t;
	cin >> t;
	while(t-- > 0){
		int n , k ;
		cin >> n >> k;
		int arr[n];
		for(int i = 0 ; i < n ; i++){
			cin >> arr[i];
		}
		sort(arr , arr+n);
		int sum1 = 0;
		int i = 0;
		if(k > n-k){
			k = n-k;
		}
		while(k-- > 0){
			sum1 += arr[i++];
		}
		int sum2 = 0;
		for(; i < n ; i++){
			sum2 += arr[i];
		}
		cout << abs(sum1 - sum2) << endl;
	}
	return 0;
}