#include <iostream>
#include <string>

using namespace std;

int main()
{
	string mor[26] =
	{
	 ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
	 "-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-",
	 "..-","...-",".--","-..-","-.--","--.."
	};
	string alpa;
	string j;


	cout << "?�파�??�력 : ";
	cin >> alpa;

	// 첫번�?문자�?모스 부?�로 변�?
	for (int i = 0; i < alpa.size(); i++)
	{
		cout << mor[alpa[i] - 'a'];
	}
	cout << endl;

	return 0;

}