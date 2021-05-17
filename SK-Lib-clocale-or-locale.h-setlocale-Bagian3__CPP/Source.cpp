#include <clocale>
#include <iostream>
#include <conio.h>

/*	Source by Programiz
	Modified for Learn by Rizky Khapidsyah
	I.D.E : Visual Studio 2019 */

using namespace std;

int main() {
	char* str;
	
	setlocale(LC_ALL, "en_US.utf8");
	str = setlocale(LC_ALL, NULL);

	cout << "Current locale  : " << str << endl;
	cout << "Changing locale " << endl;

	setlocale(LC_ALL, "en_GB.utf8");
	str = setlocale(LC_ALL, NULL);
	wcout << "Current locale: " << str << endl;

	_getch();
	return 0;
}