#pragma once
#include "Node.h"

class Queue {
	int size; //������ �������
	Node *tail; //��������� �� ����� �������
public:
	Queue() {}; //����������� �� ��������� 
	explicit Queue(int count); //����������� � ����������
	Queue(const Queue& other); //����������� �����������
	~Queue(); //����������
	int getSize(); //����� ������  ������� �������
	void pushBack(int value); //����� ���������� �������� � �����, ��������� ���������� � ����� �������� value
	void showQueue(); //����� ������ ������� �� �����

	Queue& operator = (const Queue &other); //���������� ��������� ������������
	Queue operator ! ();//���������� ��������� ���������

	Queue& operator ++();  //���������� ��������� ����������� ����������
	Queue& operator --();  //���������� ��������� ����������� ����������
	Queue operator ++(int); //���������� ��������� ������������ ����������
	Queue operator --(int); //���������� ��������� ������������ ����������
};