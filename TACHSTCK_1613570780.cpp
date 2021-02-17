#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	int n , d;
	cin >> n >> d;
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	sort(arr , arr+n);
	int pairs = 0;
	for(int i = n-1 ; i >= 0 ;){
		if(i > 0 && arr[i] - arr[i-1] <= d){
			i -= 2;
			pairs++;
		}else{
			i--;
		}
	}
	cout << pairs << endl;
	return 0;
}