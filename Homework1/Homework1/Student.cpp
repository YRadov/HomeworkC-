#include "Student.h"
#include <iostream>
#include <string.h>

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
void Student::SetExams(int mark)
{
	this->size++;

	if (!this->exams)
	{
		this->exams = new int[this->size];
	}
	//cout << this->size << endl;
	int* temp = new int[this->size];
	for (int i = 0; i < this->size; i++)
	{
		temp[i] = this->exams[i];
	}

	temp[this->size - 1] = mark;
	delete[]this->exams;
	this->exams = temp;
	temp = nullptr;
}
void Student::SetAdress(char* city, char* street, int house, int room)
{
	this->adress.SetCity(city);
	this->adress.SetStreet(street);
	this->adress.SetHouse(house);
	this->adress.SetRoom(room);
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

Adress Student::GetAdress()
{
	Adress copy = this->adress;
	return copy;
}

Student::Student()
{
	SetName("not set");
	SetLastName("not set");
	SetPhone(0);
	SetAdress("not set", "not set", 0, 0);
}

Student::Student(char* name, char* last_name)
{
	SetName(name);
	SetLastName(last_name);
	SetPhone(0);
	SetAdress("not set","not set",0,0);
}

Student::Student(char* name, char* last_name, int phone, Adress adress)
{
	SetName(name);
	SetLastName(last_name);
	SetPhone(phone);
	SetAdress(adress.GetCity(), adress.GetStreet(), adress.GetHouse(), adress.GetRoom() );
}

Student::~Student()
{
	if (this->last_name)
	{
		cout << "The student " << this->last_name << " died... ";
	}

	delete[]this->last_name;
	this->last_name = nullptr;

	delete[]this->name;
	this->name = nullptr;

	delete[]this->exams;
	this->exams = nullptr;

}

void Student::ShowExams()
{
	cout <<this->GetLastName()<< "'s marks for exams:\n";
	for (int i = 0; i < this->size; i++)
	{
		cout << i + 1 << ") " << *((this->exams) + i) << endl;
	}
}
