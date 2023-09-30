#include <iostream>
#include <string>
using namespace std;



string readString()
{
	string str;

	cout << "please enter the string?\n";
	getline(cin, str);

	return str;
}

char readCharacter()
{
	char ch;
	cout << "\nenter char to be counted?\n";
	cin >> ch;
	return ch;
}

char invertLetterCase(char ch)
{
	return islower(ch) ? toupper(ch) : tolower(ch);
}

int countCharInStrind(string str, char ch, bool matchCase=true)
{
	int counter = 0;
	for (int i = 0; i < str.length(); i++)
	{
		//if (str[i]==ch)//capital or small
		//	counter++;
		if (matchCase)
		{
			if (str[i] == ch)
				counter++;
		}
		else
		{
			/*if (str[i] == ch)
				counter++;
			ch = (ch == tolower(ch)) ? toupper(ch) : tolower(ch);*/

			if (tolower(str[i]) == tolower(ch))
				counter++;
		}
	}
	return counter;
}



int main()
{
	string str = readString();
	char ch = readCharacter();

	cout << " Letter '" << ch << "' count = " << countCharInStrind(str, ch) << endl;

	cout << " Letter '" << ch << "' Or '"<< "'" << invertLetterCase(ch);
	cout << "' count = " << countCharInStrind(str, ch, false) << endl;


	system("pause>0");

	/*int countLetter = countCharInStrind(str, ch);

	cout << " Letter '" << ch << "' count = " << countLetter << endl;

	cout << " Letter '" << ch << "' Or '";
	ch = (ch == tolower(ch)) ? toupper(ch) : tolower(ch);

	cout <<"'"<<ch << "' count = " << countCharInStrind(str, ch) + countLetter << endl;*/
	return main();

}