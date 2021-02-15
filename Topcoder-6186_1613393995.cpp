#include<iostream>
#include<cmath>
#include<queue>
using namespace std;
class DivisorInc{
public:
	int countOperations(int N , int M){
		bool added[100001];
		for(int i = 0 ; i < 100001 ; i++){
			added[i] = false;
		}
		int levels = 0;
		queue<int> bfs;
		bfs.push(N);
		added[N] = true;
		while(!bfs.empty()){
			int size = bfs.size();
			for(int i = 0 ; i < size ; i++){
				int no = bfs.front();
				//cout << no << " ";
				bfs.pop();
				if(no == M){
					return levels;
				}
				for(int j = 2 ; j * j <= no ; j++){
					if(no % j == 0){
						int n1 = no + j;
						int n2 = no + no/j;
						if(n1 <= M && !added[n1]){
							added[n1] = true;
							bfs.push(n1);
						}
						if(n2 <= M && !added[n2]){
							added[n2] = true;
							bfs.push(n2);
						}
					}
				}
			}
			//cout << endl;
			levels++;
		}
		return -1;
	}
};

// int main(){
// 	DivisorInc obj;
// 	cout << obj.countOperations(82736 , 82736) << endl;
// 	return 0;
// }