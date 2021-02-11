#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t-- > 0)
	{
		long long int n , c;
		cin >> n >> c;
		long long int sum = 0;
		long long int number = 0;
		for(int i = 0 ; i < n ; i++){
			cin >> number;
			sum += number; 
		}
		if(sum <= c) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}