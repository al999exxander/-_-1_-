

#include <iostream>
#include <Windows.h>
#include "Task_1.h"
#include "Task_2.h"
#include "Task_3.h"
#include <cmath>
#include <iomanip>

using namespace std;





int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);



	/*int arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = i;
	}

	cout << "Вывод в обычном  порядке:" << endl;

	for (int i = 0; i < 10; i++) {

		cout << arr[i] << " ";
	}

	cout << "ВЫвод в обратном порядке" << endl;

	for (int i = 10-1; i >= 0; i--) {
		cout << arr[i]<<" ";
	}*/
















	system("cls");
	cout << "выберите номер задания" << endl;
	size_t select;
	cin >> select;

	while (select != 0) {
		switch (select)
		{
		case 1: Task1();
			break;
		case 2: Task2();
			break;
		case 3: Task3();
			break;
		}
		system("pause");
		system("cls");
		cout << "Введите число от 1 до 3" << endl;
		cin >> select;
	}

	return 0;
}