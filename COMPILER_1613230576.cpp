#include<iostream>
#include<stack>
typedef long long ll; 
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t-- > 0){
		string str;
		cin >> str;
		ll ans = 0;
		stack<int> s;
		for(ll i = 0 ; i < str.length() ; i++){
			if(str[i] == '<'){
				s.push(i);
			}else{
				if(s.empty()){
				   break;
				}else{
					s.pop();
					if(s.empty()){
						ans = i+1;
					}							
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}