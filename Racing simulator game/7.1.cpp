#include <iostream>
#include <string>
#include "Choice.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");  system("cls");

	int a{}, b{}, c{}, d{}, j{}, u{};
	string h,ptr = "На данный момент не зарегестрированно не одного транспорта.";

	do {cout << "Добро пожаловать в гоночный симулятор!" << endl;
		cout << "1. Гонка для наземного транспорта" <<endl;
		cout << "2. Гонка для воздушного транспорта" << endl;
		cout << "3. Гонка для наземного и воздушного транспорта" << endl;
		cout << "Выберите тип гонки: "; cin >> a;
		cout << endl;
	}while ((a != 1 ) && (a != 2) && (a != 3));

	do {cout << "Укажите длину дистанции (должна быть положительная): "; cin >> b; cout << endl;}while (b <=0);
		cout << "Должно быть зарегестрировано хотя бы 2 транспортных стедства" << endl;

	do{ cout << "1. Зарегистрировать транспорт" << endl;
		cout << "Выберите действие: "; cin >> c; cout << endl;
	} while (c !=1);


	Choice(a,d,b,u,ptr);

	do { cout << "Требуется минимум 2 транспортных средства!\n\n"; 
	  Choice(a, d, b, u, ptr);
	}while (u > 2);

	do {
	cout << "1. Зарегестрировать транспорт" << endl;
	cout << "2. Начать гонку" << endl;
	cout << "Выберите действие: "; cin >> j;
	cout << endl;
	} while (j != 1 && j != 2 && u > 2);
	
	if (j == 1)
	{
		Choice(a,d,b,u,ptr);
	}

	if (j == 2)
	{
		cout << "Результаты гонки: \n";
		//.....
	}

	return 0;
}