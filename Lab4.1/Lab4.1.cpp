/*
Дано текстовий файл t. Підрахувати, скільки разів в цьому файлі зустрічається кожний символ, що входить в слово “BASIC” (оформити у вигляді функції).
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int ProcessTXT(char* fname) {
	ifstream fin(fname);
	string s;
	const string keyW = "BASIC";
	int k = 0;
	while (getline(fin, s))
	{
		for (unsigned i = 0; i < s.length(); i++) {
			if (s[i] == 'B' || s[i] == 'A' || s[i] == 'S' || s[i] == 'I' || s[i] == 'C') {
				k++;
			}
		}
	}
	return k;
}

int main()
{
	char name[6] = "t.txt";
	cout << "Count of symbols which included in word BASIC: " << ProcessTXT(name) << endl;

	cin.get();
	return 0;
}