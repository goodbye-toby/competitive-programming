#include<bits/stdc++.h>
#define int long long
using namespace std;
bool cmp(pair<string , int> &a , pair<string , int> &b){
	return a.second < b.second;
}
signed main(){
	int t;
	cin >> t;
	while(t-- > 0){
		int n;
		cin >> n;
		vector<pair<string , int>> v;
		for(int i = 0 ; i < n ; i++){
			string name;
			int pos;
			cin >> name >> pos;
			v.push_back(pair<string , int>(name , pos));			
		}
		sort(v.begin() , v.end() , cmp);
		int insert_pos = 1;
		int bad = 0;
		string arr[n+1];
		for(auto &it : v){
			bad += abs(it.second - insert_pos);
			arr[insert_pos++] = it.first;
		}
		cout << bad << endl;
	}
	return 0;
}