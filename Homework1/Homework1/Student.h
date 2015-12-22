#pragma once
#include "Adress.h"
class Student
{
	char* name;
	char* last_name;
	int phone;
	//Adress adress;
	//+3 динам массива(зачеты, курсовые, экзамены)


public:

	void SetName(char* name);
	void SetLastName(char* last_name);
	void SetPhone(int phone);
	void SetAdress(char* city, char* street, int house, int room);


	char* GetName()const;
	char* GetLastName()const;
	int   GetPhone()const;
	Adress* GetAdress()const;

	Student() :name(nullptr), last_name(nullptr), phone(0) {};

	Student(char* name, char* last_name);

	//конструктор копирования

	~Student();
};

