#pragma once
#include "Node.h"

class Queue {
	int size; //размер очереди
	Node *tail; //указатель на конец очереди
public:
	Queue() {}; //конструктор по умолчанию 
	explicit Queue(int count); //конструктор с параметром
	Queue(const Queue& other); //конструктор копирования
	~Queue(); //деструктор
	int getSize(); //метод взятия  размера очереди
	void pushBack(int value); //метод добавления элемента в конец, добавляем переданное в метод значение value
	void showQueue(); //метод вывода очереди на экран

	Queue& operator = (const Queue &other); //перегрузка оператора присваивания
	Queue operator ! ();//перегрузка оператора отрицание

	Queue& operator ++();  //перегрузка оператора префиксного инкремента
	Queue& operator --();  //перегрузка оператора префиксного декремента
	Queue operator ++(int); //перегрузка оператора постфиксного инкремента
	Queue operator --(int); //перегрузка оператора постфиксного декремента
};