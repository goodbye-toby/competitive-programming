#include<iostream>
#include<set>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t-- > 0){
		int n , k;
		cin >> n >> k;
		string check[n];
		for(int i = 0 ; i < n ; i++){
			cin >> check[i];
		}
		set<string> s;
		while(k-- > 0){
			int len;
			cin >> len;
			while(len-- > 0){
				string str;
				cin >> str;
				s.insert(str);
			}
		}
		for(int i = 0 ; i < n ; i++){
			if(s.find(check[i]) != s.end()){
				cout << "YES" << " ";
			}else{
				cout << "NO" << " ";
			}
		}
		cout << endl;
	}
	return 0;
}