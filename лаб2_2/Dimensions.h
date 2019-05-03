#pragma once

//класс Габариты
class Dimensions {
	int height; //высота
	int width; //ширина
	int depth; //глубина
public:
	Dimensions() {}; //конструктор по умолчанию (здесь он пустой)
	Dimensions(int height, int width = 5, int depth = 10); //конструктор с параметрами
	Dimensions(const Dimensions& other); //конструктор копирования
	void show(); //метод вывода габаритов

	//Методы класса
	const bool operator > (const Dimensions& ob2);
	const bool operator > (const int value);

	const bool operator < (const Dimensions& ob2);
	const bool operator < (const int value);

	const bool operator >= (const Dimensions& ob2);
	const bool operator >= (const int value);

	const bool operator <= (const Dimensions& ob2);
	const bool operator <= (const int value);

	//Дружественные функции	
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