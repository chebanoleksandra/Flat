#include "Flat.h"
#include <iostream>
using namespace std;

Flat::Flat()
{
	size = 0;
	address = nullptr;
	price = 0.0;
}

Flat::Flat(int s, const char* a, double p)
{
	size = s;
	address = new char[strlen(a) + 1];
	strcpy_s(address, strlen(a) + 1, a);
	price = p;
}

Flat::Flat(Flat& obj)
{
	size = obj.size;
	if (address != nullptr)
	{
		delete[] address;
	}
	address = new char[strlen(obj.address) + 1];
	strcpy_s(address, strlen(obj.address) + 1, obj.address);
	price = obj.price;
}

Flat& Flat::operator=(Flat& obj)
{
	if (*this == obj)
	{
		return *this;
	}
	if (address != nullptr)
	{
		delete[] address;
	}
	size = obj.size;
	address = new char[strlen(obj.address) + 1];
	strcpy_s(address, strlen(obj.address) + 1, obj.address);
	price = obj.price;
	return *this;
}

bool Flat::operator==(Flat& obj)
{
	if (size == obj.size)
	{
		return true;
	}
	return false;
}

bool Flat::operator>(Flat& obj)
{
	if (size > obj.size)
	{
		return true;
	}
	return false;
}

bool Flat::operator<(Flat& obj)
{
	if (*this > obj)
	{
		return false;
	}
	return true;
}

void Flat::Print()
{
	cout << "Size = " << size << "\nAddress = " << address << "\nPrice = " << price << endl;
}

Flat::~Flat()
{
	delete[] address;
	size = 0;
	price = 0;
}
