#include<iostream>
typedef long long ll;
using namespace std;
void swap(ll arr[] , ll a , ll b){
	ll temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}
void reverse(ll arr[] , ll start , ll end){
	while(start <= end){
		swap(arr , start++ , end--);
	}
}
int main(){
	int t;
	cin >> t;
	while(t-- > 0){
		ll n;
		cin >> n;
		ll arr[n];
		for(int i = 0 ; i < n ; i++){
			ll no;
			cin >> no;
			arr[i] = no;
		}
		int j;
		for(j = n-1 ; j > 0 ; j--){
			if(arr[j-1] < arr[j]){
				break;
			}
		}
		if(j == 0){
			cout << -1 << endl;
		}else{
			ll idx = j;
			for(int i = j+1 ; i < n ; i++){
				if(arr[i] > arr[j-1]){
					if(arr[i] <= arr[idx]){
						idx = i;
					}
				}
			}
			swap(arr , j-1 , idx);
			// for(int i = 0 ; i < n ; i++){
			// 	cout << arr[i];
			// }		
			reverse(arr , j , n-1);
			for(int i = 0 ; i < n ; i++){
				cout << arr[i];
			}
			cout << endl;
		}
	}
	return 0;
}