#pragma once
class Flat
{
	int size;
	char* address;
	double price;
public:
	Flat();
	Flat(int s, const char* a, double p);
	Flat(Flat& obj);
	Flat& operator=(Flat& obj);
	bool operator==(Flat& obj);
	bool operator>(Flat& obj);
	bool operator<(Flat& obj);
	void Print();
	~Flat();
};

