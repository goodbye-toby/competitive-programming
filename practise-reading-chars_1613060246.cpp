#include<iostream>
using namespace std;
int main()
{
	int x = 0;
	int y = 0;
	char ch = cin.get();
	while(ch != '\n')
	{
		switch(ch)
		{
			case 'N':
			y +=1;
			break;
			case 'S':
			y -= 1;
			break;
			case 'W':
			x -= 1;
			break;
			case 'E':
			x+=1;
			break;
		}
		ch = cin.get();
	}
	cout << x << " " << y << endl;
	return 0;
}