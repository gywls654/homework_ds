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


	cout << "?ŒíŒŒë²??…ë ¥ : ";
	cin >> alpa;

	// ì²«ë²ˆì§?ë¬¸ìë¥?ëª¨ìŠ¤ ë¶€?¸ë¡œ ë³€ê²?
	for (int i = 0; i < alpa.size(); i++)
	{
		cout << mor[alpa[i] - 'a'];
	}
	cout << endl;

	return 0;

}