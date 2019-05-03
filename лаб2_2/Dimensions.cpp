#include <iostream>
#include "Dimensions.h"

using namespace std;

//просто говорим, что значения в классе равны переданным значениям
Dimensions::Dimensions(int height, int width, int depth) {
	this->height = height;
	this->depth = depth;
	this->width = width;
}

// значения из объекта other (объект из которого копируем) заносим в созданный объект (объект в который копируем/созданный объект)
Dimensions::Dimensions(const Dimensions & other) {
	this->height = other.height;
	this->depth = other.depth;
	this->width = other.width;
}

//просто вывод габаритов на экран
void Dimensions::show() {
	cout << "Высота: " << height << endl;
	cout << "Ширина: " << width << endl;
	cout << "Глубина: " << depth << endl << endl;
}

//сравнение типа (ob1 > ob2)
const bool Dimensions::operator>(const Dimensions & ob2)
{
	if (height * width * depth > ob2.height * ob2.width * ob2.depth)
		return true;
	else
		return false;
}

//сравнение типа (ob1 > value)
const bool Dimensions::operator>(const int value)
{
	if (height * width * depth > value)
		return true;
	else
		return false;
}

//сравнение типа (ob1 < ob2)
const bool Dimensions::operator<(const Dimensions & ob2)
{
	if (height * width * depth < ob2.height * ob2.width * ob2.depth)
		return true;
	else
		return false;
}

//сравнение типа (ob1 < value)
const bool Dimensions::operator<(const int value)
{
	if (height * width * depth < value)
		return true;
	else
		return false;
}

//сравнение типа (ob1 >= ob2)
const bool Dimensions::operator>=(const Dimensions & ob2)
{
	if (height * width * depth >= ob2.height * ob2.width * ob2.depth)
		return true;
	else
		return false;
}

//сравнение типа (ob1 >= value)
const bool Dimensions::operator>=(const int value)
{
	if (height * width * depth >= value)
		return true;
	else
		return false;
}

//сравнение типа (ob1 <= ob2)
const bool Dimensions::operator<=(const Dimensions & ob2)
{
	if (height * width * depth <= ob2.height * ob2.width * ob2.depth)
		return true;
	else
		return false;
}

//сравнение типа (ob1 <= value)
const bool Dimensions::operator<=(const int value)
{
	if (height * width * depth <= value)
		return true;
	else
		return false;
}