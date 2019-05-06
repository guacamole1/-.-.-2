#include <iostream>
#include "Dimensions.h"

using namespace std;

//сравнение типа (ob1 != ob2)
const bool operator!=(const Dimensions & ob1, const Dimensions & ob2)
{
	if (ob1.height * ob1.width * ob1.depth != ob2.height * ob2.width * ob2.depth)
		return true;
	else
		return false;
}

//сравнение типа (ob1 != value)
const bool operator!=(const Dimensions & ob1, const int value)
{
	return !(ob1 == value);
}

//сравнение типа (value != ob1)
const bool operator!=(const int value, const Dimensions & ob1)
{
	return !(value == ob1);
}

//сравнение типа (ob1 == ob2)
const bool operator==(const Dimensions & ob1, const Dimensions & ob2)
{
	if (ob1.height * ob1.width * ob1.depth == ob2.height * ob2.width * ob2.depth)
		return true;
	else
		return false;
}

//сравнение типа (ob1 == value)
const bool operator==(const Dimensions & ob1, const int value)
{
	if (ob1.height * ob1.width * ob1.depth == value)
		return true;
	else
		return false;
}

//сравнение типа (value == ob1)
const bool operator==(const int value, const Dimensions & ob1)
{
	if (value == ob1.height * ob1.width * ob1.depth)
		return true;
	else
		return false;
}

//сравнение типа (value > ob2)
const bool operator>(const int value, const Dimensions & ob2)
{
	if (value > ob2.height * ob2.width * ob2.depth)
		return true;
	else
		return false;
}

//сравнение типа (value >= ob2)
const bool operator>=(const int value, const Dimensions & ob2)
{
	if (value >= ob2.height * ob2.width * ob2.depth)
		return true;
	else
		return false;
}

//сравнение типа (value < ob1)
const bool operator<(const int value, const Dimensions & ob1)
{
	if (value < ob1.height * ob1.width * ob1.depth)
		return true;
	else
		return false;
}

//сравнение типа (value <= ob1)
const bool operator<=(const int value, const Dimensions & ob1)
{
	if (value <= ob1.height * ob1.width * ob1.depth)
		return true;
	else
		return false;
}
