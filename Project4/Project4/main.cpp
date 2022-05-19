#include <iostream>
#include <locale>
#include <ctime>

#include "template.h"
using namespace std;

int main() {

	srand(time(0));
	setlocale(LC_ALL, "");


	int flag = 1;
	int c;
	while (flag == 1) {
		cout << "С каким типом переменных мы будем работать?" << endl;
		cout << "1 - целочисленный" << endl;
		cout << "2 - дробный" << endl;
		cout << "0 - выход" << endl;
		cin >> c;
		switch (c)
		{
		case 1:
			system("cls");

			search(1);
			system("pause");
			break;
		case 2:
			system("cls");
			search(1.1);
			system("pause");
			break;
		case 0:
			cout << "\n";
			flag = 0;
			break;

		default:
			break;
		}
	}



	return 0;
}