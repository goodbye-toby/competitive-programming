#include<iostream>
#include<stack>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t-- > 0){
		string input;
		cin >> input;
		string eqn = "(";
		eqn = eqn + input + ")";
		stack<string> operators;
		stack<string> operands;
		string ans;
		for(int i = 0 ; i < eqn.length() ; i++){
			if(eqn[i] == '(') continue;
			if(isalpha(eqn[i])){
				operands.push(string(1 , eqn[i]));
			}
			else if(eqn[i] == '+' or eqn[i] == '-' or eqn[i] == '*' or eqn[i] == '/' or eqn[i] == '^'){
				operators.push(string(1 , eqn[i]));
			}else{
				string part1 = "";
				string part2 = "";
				string op = "";
				if(!operands.empty()){
					part2 = operands.top();
					operands.pop();
				}
				if(!operands.empty()){
					part1 = operands.top();
					operands.pop();
				}
				if(!operators.empty()){
					op = operators.top();
					operators.pop();
				}
				ans = part1 + part2 + op;
				operands.push(part1 + part2 + op);
			}
		}
		cout << ans << endl;
	}
	return 0;
}