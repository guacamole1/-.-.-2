#include <iostream>
#include <locale>
#include "Queue.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "ru"); //�����������
	srand(time(NULL));

	int size = rand() % 7 + 3;
	Queue a(size);
	Queue b(size);
	int menu; //���������� ��� switch
	bool flag = true; 

	while (flag)
	{
		system("cls");
		cout << "������ �������: " << a.getSize() << endl << endl;
		cout << "������ a:" << endl;
		a.showQueue(); //���������� ������� �
		cout << endl << endl; 
		cout << "������ b:" << endl;
		b.showQueue(); //���������� ������� b
		cout << endl << endl;

		cout << "1) b = ++a" << endl;
		cout << "2) b = a++" << endl;
		cout << "3) b = --a" << endl;
		cout << "4) b = a--" << endl;
		cout << "5) b = !a" << endl;
		cout << "0) �����" << endl;
		cout << "�������� �������: ";
		cin >> menu;

		switch (menu)
		{
		case 1:	b = ++a; break; //� � b ����� ���������
		case 2: b = a++; break; //a ���������, b ����� ����� ������� a
		case 3: b = --a; break; //� � b ����� ���������
		case 4: b = a--; break; //a ���������, b ����� ����� ������� a
		case 5: b = !a; break;  //b ����� ����� ��������� a
		case 0: flag = false; //�����
		}
	}
}