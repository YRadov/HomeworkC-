#include "Adress.h"
#include <iostream>
using namespace std;

void Adress::SetCity(char* city)
{
	int length = strlen(city) + 1;
	if (length == 1) return;

	if (this->city)
	{
		delete[] this->city;
		this->city = nullptr;
	}
	this->city = new char[length];
	strcpy_s(this->city, length, city);
}

void Adress::SetStreet(char* street)
{
	int length = strlen(street) + 1;
	if (length == 1) return;

	if (this->street)
	{
		delete[] this->street;
		this->street = nullptr;
	}
	this->street = new char[length];
	strcpy_s(this->street, length, street);
}

void Adress::SetHouse(int house)
{
	if (house > 0)
	{
		this->house = house;
	}
}

void Adress::SetRoom(int room)
{
	if (room > 0)
	{
		this->room = room;
	}

}

char* Adress::GetCity() const
{
	int length = strlen(this->city) + 1;
	char* copy = new char[length];
	strcpy_s(copy, length, this->city);
	return copy;
}

char* Adress::GetStreet() const
{
	int length = strlen(this->street) + 1;
	char* copy = new char[length];
	strcpy_s(copy, length, this->street);
	return copy;
}

int Adress::GetHouse()
{
	return this->house;
}

int Adress::GetRoom()
{
	return this->room;
}


Adress::Adress(char* city, char* street, int house, int room)
{
	SetCity(city);
	SetStreet(street);
	SetHouse(house);
	SetRoom(room);
}

Adress::~Adress()
{
	delete[]this->city;
		this->city = nullptr;
	delete[]this->street;
		this->street = nullptr;
		cout << "\nAdress is destroyed!!!\n";
}


