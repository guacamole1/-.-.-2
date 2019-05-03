#pragma once

//����� ��������
class Dimensions {
	int height; //������
	int width; //������
	int depth; //�������
public:
	Dimensions() {}; //����������� �� ��������� (����� �� ������)
	Dimensions(int height, int width = 5, int depth = 10); //����������� � �����������
	Dimensions(const Dimensions& other); //����������� �����������
	void show(); //����� ������ ���������

	//������ ������
	const bool operator > (const Dimensions& ob2);
	const bool operator > (const int value);

	const bool operator < (const Dimensions& ob2);
	const bool operator < (const int value);

	const bool operator >= (const Dimensions& ob2);
	const bool operator >= (const int value);

	const bool operator <= (const Dimensions& ob2);
	const bool operator <= (const int value);

	//������������� �������	
	friend const bool operator != (const Dimensions& ob1, const Dimensions& ob2);
	friend const bool operator != (const Dimensions& ob1, const int value);
	friend const bool operator != (const int value, const Dimensions& ob1);

	friend const bool operator == (const Dimensions& ob1, const Dimensions& ob2);
	friend const bool operator == (const Dimensions& ob1, const int value);
	friend const bool operator == (const int value, const Dimensions& ob1);

	friend const bool operator > (const int value, const Dimensions& ob2);
	friend const bool operator >= (const int value, const Dimensions& ob2);

	friend const bool operator < (const int value, const Dimensions& ob1);
	friend const bool operator <= (const int value, const Dimensions& ob1);
};