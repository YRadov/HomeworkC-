#include "Student.h"
#include <iostream>
using namespace std;

void Student::SetName(char* name)
{
	int length = strlen(name) + 1;
	if (length == 1) return;

	if (this->name)
	{
		delete[] this->name;
		this->name = nullptr;
	}
	this->name = new char[length];
	strcpy_s(this->name, length, name);
}
void Student::SetLastName(char* last_name)
{
	int length = strlen(last_name) + 1;
	if (length == 1) return;

	if (this->last_name)
	{
		delete[] this->last_name;
		this->last_name = nullptr;
	}
	this->last_name = new char[length];
	strcpy_s(this->last_name, length, last_name);
}
void Student::SetPhone(int phone)
{
	this->phone = phone;
}
void Student::SetAdress(char* city, char* street, int house, int room)
{
	//this->adress.SetCity(city);
	//this->adress.SetStreet(street);
	//this->adress.SetHouse(house);
	//this->adress.SetRoom(room);
}


char* Student::GetName()const
{
	int length = strlen(this->name) + 1;
	char* copy = new char[length];
	strcpy_s(copy, length, this->name);
	return copy;
}
char* Student::GetLastName()const
{
	int length = strlen(this->last_name) + 1;
	char* copy = new char[length];
	strcpy_s(copy, length, this->last_name);
	return copy; 
}
int   Student::GetPhone()const
{
	return this->phone;
}
Adress* Student::GetAdress()const
{
	Adress* copy;// = this->adress;
	return copy;
}

Student::Student(char* name, char* last_name)
{
	SetName(name);
	SetLastName(last_name);
	SetPhone(0);
}


Student::~Student()
{
	delete[]this->last_name;
	this->last_name = nullptr;

	delete[]this->name;
	this->name = nullptr;

	cout << "The student died... ";
}
