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
		cout << "� ����� ����� ���������� �� ����� ��������?" << endl;
		cout << "1 - �������������" << endl;
		cout << "2 - �������" << endl;
		cout << "0 - �����" << endl;
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