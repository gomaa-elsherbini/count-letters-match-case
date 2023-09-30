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

int countCharInStrind(string str, char ch)
{
	int counter = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i]==ch)//capital or small
			counter++;
	}
	return counter;
}



int main()
{
	string str = readString();
	char ch = readCharacter();
	int countLetter = countCharInStrind(str, ch);

	cout << " Letter '" << ch << "' count = " << countLetter << endl;

	cout << " Letter '" << ch << "' Or '";
	ch = (ch == tolower(ch)) ? toupper(ch) : tolower(ch);

	cout <<"'"<<ch << "' count = " << countCharInStrind(str, ch) + countLetter << endl;



	system("pause>0");

	return main();

}