#include<iostream>
#include<ctype.h>
using namespace std;
int getvalue(char ch){
	if(ch == 'C') return 12;
	if(ch == 'O') return 16;
	if(ch == 'H') return 1;
}
int molecule_without_bracket(string str){
	//cout << "Called func " << str << endl;
	int ans = 0;
	for(int i = 0 ; i < str.length() ; i++){
		//cout << str[i] << endl;
		if(str[i] == '('){
			//cout << "Detected OPEN Bracket" << endl;
			int open_brackets = 1;
			int len = 0;
			int end = i+1;
			while(open_brackets != 0){
				if(str[end] == '('){
					open_brackets++;
				}else if(str[end] == ')'){
					open_brackets--;
				}
				end++;
				len++;
			}
			end = end-1;
			//cout << "Detected Last Bracket as " << str[end] << endl;
			if(end == str.length()-1){
				//cout << "It is the last character" << endl;
				ans += molecule_without_bracket(str.substr(i+1 , len-1));
				i = end;
			}else{
				//cout << "It is not the last character" << endl;
				if(isdigit(str[end+1])){
					//cout << "It has a number after the character" << endl;
					ans += (str[end+1] - '0') * molecule_without_bracket(str.substr(i+1 , len-1));
					i = end+1;
				}else{
					//cout << "It doenot have a number afer last char" << endl;
					ans += molecule_without_bracket(str.substr(i+1 , len-1));
					i = end;
				}
			}
		}
		else if(isalpha(str[i])){
			//cout << "It is only a char" << endl;
			if(isalpha(str[i]) && isdigit(str[i+1])){
				//cout << "char and digit" << endl;
				ans += (str[i+1] - '0') * getvalue(str[i]);
				i+=1;
			}else{
				//cout << "others" << endl;
				ans += getvalue(str[i]);
			}
		}
		//cout << ans << endl;
	}
	return ans;
}
int main(){
	string str;
	cin >> str;
	cout << molecule_without_bracket(str) << endl;
	return 0;
}