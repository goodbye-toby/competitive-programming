#include <bits/stdc++.h>
using namespace std;
class PrimePolynom{
public:
	bool is_not_prime(long long int n){
		if(n < 2){
			return true;
		}
		for(int i = 2 ; i * i <= n ; i++){
			if(n % i == 0){
				return true;
			}
		}
		return false;
	}
	int reveal(int A , int B , int C){
		int M = 0;
		while(true){
			long long int ans = A * M * M + B * M + C;
			if(is_not_prime(ans)){
				return M;
			}
			M++;
		}
	}
};
int main(){
	PrimePolynom obj;
	int a , b , c;
	cin >> a >> b >> c;
	cout << obj.reveal(a , b , c) << endl;
	return 0;
}