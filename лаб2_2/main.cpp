/*� ������ ����� ���������� ����� ��� �������� � �������� ��� ���������. ���� ��������� ����������� ���:
�� ����� ���������� ������ �������� ��� ����� ������� � ��������, ����� - ������������ ���� ���� ���������

� ���� 8 �������: 6 ���������� ���������, 1 - ��������� �������� ��� ���������, 1 - ����� �� ���������

��� ������ ������� 1-6 ����� �������� ��� ������: �������� 2 �������� � ��������� ��������. ����� ����� ���������� 3
�������� �������� (* - 1 �� 6 ���������� ���������):
					value * ob1
					ob1 * value
					ob1 * ob2
	������ ��� ������ ���������� ������ � �������� int ���������, ����������� ��� ��������: ����� ����� � ������
	��������� ���������� ��� �������
��� ������ ������ �� ���� ������� ����� ������ ������� True ��� False � ����������� ������������ �����������
��������, ���� value = 10, � ����� ob1 = 15, �� ��� value > ob1 ����� �������� False, ��� ��� 10 �� ������ 15.
�� ��� value < ob1 ����� �������� True, ��� ��� 10 ������ 15*/

#include <iostream>
#include <locale>
#include "Dimensions.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "ru"); //�����������

	int height;
	int width;
	int depth;

	//������ ��������� ��������
	cout << "������� ������: ";
	cin >> height;
	cout << "������� ������: ";
	cin >> width;
	cout << "������� �������: ";
	cin >> depth;

	//������� ������ � �������� ��� ��������� ��������
	Dimensions ob1(height, width, depth);

	//������� ������ � �������� ��� ������ ���� ��������, ��� ��������� �������� ����� ������������ ��������� �� ���������
	Dimensions ob2(height);

	int value; //�������� ��� ���������
	cout << "������� ����� ��� ���������: ";
	cin >> value;

	int menu; //���������� ��� switch
	bool flag = true; //bool ���������� ��� ����� while

	while (flag)
	{
		//����� ����
		system("cls");
		cout << "1) ==" << endl;
		cout << "2) !=" << endl;
		cout << "3) >" << endl;
		cout << "4) >=" << endl;
		cout << "5) <" << endl;
		cout << "6) <=" << endl;
		cout << "7) �������� ����� ��� ���������" << endl;
		cout << "0) �����" << endl;
		cout << "�������� �������: ";
		cin >> menu;
		system("cls");
		cout << "������ ob1: " << endl;
		ob1.show();
		cout << endl;
		cout << "������ ob2: " << endl;
		ob2.show();
		cout << endl;
		cout << "�������� ��������: " << value << endl;

		//���� ��������� ��� ������� ������������� ������������� ���������� ���������� � ���������� � ��������
		switch (menu)
		{
		//1-6 case ���������� ���� ������ ���������

		//�������� ==
		case 1:	
			cout << "1) value == ob1" << endl; //���������������� �������� �����, ������ ������
			cout << "2) ob1 == value" << endl; //������ ������, ���������������� ��������
			cout << "3) ob1 == ob2" << endl; //������������ ��� �������
			cin >> menu;
			switch (menu)
			{
			/*���� ��������� ��������� � ������������ ������ ������������� ����������
			(�������� ���������) ? (����� "��") : (����� "���"); */
			case 1: (value == ob1) ? cout << "True" : cout << "False"; break;
			case 2: (ob1 == value) ? cout << "True" : cout << "False"; break;
			case 3: (ob1 == ob2) ? cout << "True" : cout << "False"; break;
			}
			cout << endl;
			system("pause");
			break;

		//�������� !=
		case 2:
			cout << "1) value != ob1" << endl; 
			cout << "2) ob1 != value" << endl; 
			cout << "3) ob1 != ob2" << endl;
			cin >> menu;
			switch (menu)
			{
			case 1: (value != ob1) ? cout << "True" : cout << "False"; break;
			case 2: (ob1 != value) ? cout << "True" : cout << "False"; break;
			case 3: (ob1 != ob2) ? cout << "True" : cout << "False"; break;
			}
			cout << endl;
			system("pause");
			break;

		//�������� >
		case 3: 
			cout << "1) value > ob1" << endl; 
			cout << "2) ob1 > value" << endl; 
			cout << "3) ob1 > ob2" << endl;
			cin >> menu;
			switch (menu)
			{
			case 1: (value > ob1) ? cout << "True" : cout << "False"; break;
			case 2: (ob1 > value) ? cout << "True" : cout << "False"; break;
			case 3: (ob1 > ob2) ? cout << "True" : cout << "False"; break;
			}
			cout << endl;
			system("pause");
			break;

		//�������� >=
		case 4:
			cout << "1) value >= ob1" << endl;
			cout << "2) ob1 >= value" << endl; 
			cout << "3) ob1 >= ob2" << endl;
			cin >> menu;
			switch (menu)
			{
			case 1: (value >= ob1) ? cout << "True" : cout << "False"; break;
			case 2: (ob1 >= value) ? cout << "True" : cout << "False"; break;
			case 3: (ob1 >= ob2) ? cout << "True" : cout << "False"; break;
			}
			cout << endl;
			system("pause");
			break;

		//�������� <
		case 5:
			cout << "1) value < ob1" << endl;
			cout << "2) ob1 < value" << endl;
			cout << "3) ob1 < ob2" << endl;
			cin >> menu;
			switch (menu)
			{
			case 1: (value < ob1) ? cout << "True" : cout << "False"; break;
			case 2: (ob1 < value) ? cout << "True" : cout << "False"; break;
			case 3: (ob1 < ob2) ? cout << "True" : cout << "False"; break;
			}
			cout << endl;
			system("pause");
			break;

		//�������� <=
		case 6:
			cout << "1) value <= ob1" << endl; 
			cout << "2) ob1 <= value" << endl; 
			cout << "3) ob1 <= ob2" << endl;
			cin >> menu; 
			switch (menu)
			{
			case 1: (value <= ob1) ? cout << "True" : cout << "False"; break;
			case 2: (ob1 <= value) ? cout << "True" : cout << "False"; break;
			case 3: (ob1 <= ob2) ? cout << "True" : cout << "False"; break;
			}
			cout << endl;
			system("pause");
			break;

		//��������� ����������������� ��������
		case 7:
			cout << "������� ����� �������� value: ";
			cin >> value;  //�������������� ���������������� ��������
			system("pause");
			break; 
		case 0: flag = false; //��� ����������� ������ ����� while ������ ���� �� falses
		}
		
	}
	return 0;
}