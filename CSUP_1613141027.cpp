#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t-- > 0){
		long long int n;
		cin >> n;
		string str;
		cin >> str;
		long long int number_of_ones = 0;
		for(int i = 0 ; i < n ; i++){
			if(str[i] == '1'){
				number_of_ones += 1;
			}
		}
		long long int ans = number_of_ones * (number_of_ones + 1);
		ans = ans / 2;
		cout << ans << endl;
	}
	return 0;
}