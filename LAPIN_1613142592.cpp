#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t-- > 0){
		string str;
		cin >> str;
		int map[26] = {0};
		for(int i = 0 ; i <= str.length()/2 ; i++){
			map[str[i] - 'a']++;
		}
		for(int i = str.length()/2+1 ; i < str.length() ; i++){
			map[str[i] - 'a']--;
		}
		int disp = 0;
		for(int i = 0 ; i < 26 ; i++){
			if(map[i] != 0) disp++;
			//cout << map[i] << " , ";
		}
		//cout << endl;
		if(disp <= 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}