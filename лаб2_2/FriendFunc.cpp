#include <iostream>
#include "Dimensions.h"

using namespace std;

//��������� ���� (ob1 != ob2)
const bool operator!=(const Dimensions & ob1, const Dimensions & ob2)
{
	if (ob1.height * ob1.width * ob1.depth != ob2.height * ob2.width * ob2.depth)
		return true;
	else
		return false;
}

//��������� ���� (ob1 != value)
const bool operator!=(const Dimensions & ob1, const int value)
{
	return !(ob1 == value);
}

//��������� ���� (value != ob1)
const bool operator!=(const int value, const Dimensions & ob1)
{
	return !(value == ob1);
}

//��������� ���� (ob1 == ob2)
const bool operator==(const Dimensions & ob1, const Dimensions & ob2)
{
	if (ob1.height * ob1.width * ob1.depth == ob2.height * ob2.width * ob2.depth)
		return true;
	else
		return false;
}

//��������� ���� (ob1 == value)
const bool operator==(const Dimensions & ob1, const int value)
{
	if (ob1.height * ob1.width * ob1.depth == value)
		return true;
	else
		return false;
}

//��������� ���� (value == ob1)
const bool operator==(const int value, const Dimensions & ob1)
{
	if (value == ob1.height * ob1.width * ob1.depth)
		return true;
	else
		return false;
}

//��������� ���� (value > ob2)
const bool operator>(const int value, const Dimensions & ob2)
{
	if (value > ob2.height * ob2.width * ob2.depth)
		return true;
	else
		return false;
}

//��������� ���� (value >= ob2)
const bool operator>=(const int value, const Dimensions & ob2)
{
	if (value >= ob2.height * ob2.width * ob2.depth)
		return true;
	else
		return false;
}

//��������� ���� (value < ob1)
const bool operator<(const int value, const Dimensions & ob1)
{
	if (value < ob1.height * ob1.width * ob1.depth)
		return true;
	else
		return false;
}

//��������� ���� (value <= ob1)
const bool operator<=(const int value, const Dimensions & ob1)
{
	if (value <= ob1.height * ob1.width * ob1.depth)
		return true;
	else
		return false;
}
