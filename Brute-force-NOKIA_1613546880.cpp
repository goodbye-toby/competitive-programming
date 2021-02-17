#include<bits/stdc++.h>
using namespace std;
int check_minimum(vector<int> v , int m , int n){
	bool p[n+2];
	p[0] = true;
	for(int i = 1 ; i < n+1 ; i++){
		p[i] = false;
	}
	p[n+1] = true;
	int wire_used = 0;
	for(auto it = v.begin() ; it != v.end() ; it++){
		int value = *it;
		p[value] = true;
		int left = 0;
		int right = 0;
		for(int right_neighbour = value+1 ; right_neighbour <= n+1 ; right_neighbour++){
			if(p[right_neighbour] == true){
				right = right_neighbour - value;
				break; 
			}
		}
		for(int left_neighbour = value-1 ; left_neighbour >= 0 ; left_neighbour--){
			if(p[left_neighbour] == true){
				left = value - left_neighbour;
				break;
			}
		}
		wire_used = left + right;
		m = m - wire_used;
		if(m < 0) return INT_MAX;
	}
	return m;
}
void find_permutation(vector<int> v , int arr[] , int n , bool used[] , int m , int ans[]){
	if(v.size() == n){
		int val = check_minimum(v , m , n);
		ans[0] = min(ans[0] , val);
	}
	for(int i = 0 ; i < n ; i++){
		if(!used[i]){
			used[i] = true;
			v.push_back(arr[i]);
			find_permutation(v , arr , n , used , m , ans);
			v.pop_back();
			used[i] = false;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t-- > 0){
		int n , m;
		cin >> n >> m;
		int arr[n];
		bool used[n];
		for(int i = 0 ; i < n ; i++){
			used[i] = false;
			arr[i] = i+1;
		}
		vector<int> v;
		int ans[1] = {INT_MAX};
		find_permutation(v , arr ,  n  ,used , m , ans);
		if(ans[0] == INT_MAX){
			cout << -1 << endl;
		}else{
			cout << ans[0] << endl;
		}
	}
	return 0;
}