#include<iostream>
#include<stack>
using namespace std;
int main(){
	while(true){
		int n;
		cin >> n;
		if(n == 0) break;
		int arr[n] = {0};
		int final_arr[n] ={0};
		for(int i = 0 ; i < n ; i++){
			cin >> arr[i];
		}
		stack<int> s;
		int idx = 0;
		for(int i = 0 ; i < n ; i++){
			while(!s.empty() && s.top() < arr[i]){
				final_arr[idx++] = s.top();
				s.pop();
			}
			s.push(arr[i]);
		}
		while(!s.empty()){
			final_arr[idx++] = s.top();
			s.pop();
		}
		int prev  = -1;
		bool sorted = true;
		for(int i = 0 ; i < n ; i++){
			if(final_arr[i] < prev){
				sorted = false;
				break;
			}
			prev = final_arr[i];
		}
		if(sorted) cout << "yes" << endl;
		else cout << "no" <<endl;

	}
	return 0;
}