#include <iostream>
#include <locale>
#include "Queue.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "ru"); //локализация
	srand(time(NULL));

	int size = rand() % 7 + 3;
	Queue a(size);
	Queue b(size);
	int menu; //переменная для switch
	bool flag = true; 

	while (flag)
	{
		system("cls");
		cout << "Размер очереди: " << a.getSize() << endl << endl;
		cout << "Объект a:" << endl;
		a.showQueue(); //показываем очередь а
		cout << endl << endl; 
		cout << "Объект b:" << endl;
		b.showQueue(); //показываем очередь b
		cout << endl << endl;

		cout << "1) b = ++a" << endl;
		cout << "2) b = a++" << endl;
		cout << "3) b = --a" << endl;
		cout << "4) b = a--" << endl;
		cout << "5) b = !a" << endl;
		cout << "0) Выход" << endl;
		cout << "Выберите команду: ";
		cin >> menu;

		switch (menu)
		{
		case 1:	b = ++a; break; //а и b будут совпадать
		case 2: b = a++; break; //a изменится, b будет равно старому a
		case 3: b = --a; break; //а и b будут совпадать
		case 4: b = a--; break; //a изменится, b будет равно старому a
		case 5: b = !a; break;  //b будет равно отрицанию a
		case 0: flag = false; //выход
		}
	}
}
