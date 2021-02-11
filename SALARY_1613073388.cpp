#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t-- > 0){
		int n;
		cin >> n;
		int arr[100];
		cin >> arr[0];
		int minId = 0;
		int maxId = 0;
		for(int i = 1 ; i < n ; i++){
			cin  >> arr[i];
			if(arr[i] <= arr[minId]){
				minId = i;
			}
			else if(arr[i] >= arr[maxId]){
				maxId = i;
			}
		}
		int diff = 0;
		int steps = 0;
		while(true){
			diff = arr[maxId] - arr[minId];
			if(diff == 0){
				break;
			}
			steps += diff;
			for(int i = 0 ; i < n ; i++){
				if(i != maxId) arr[i] += diff;
			}
			for(int i = 0 ; i < n ; i++){
				if(arr[i] >= arr[maxId]){
					maxId = i;
				}
				if(arr[i] <= arr[minId]){
					minId = i;
				}
			}
		}
		steps += diff;
		cout << steps << endl;
	}
	return 0;
}