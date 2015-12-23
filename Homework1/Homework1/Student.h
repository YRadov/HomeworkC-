#pragma once
#include "Adress.h"
class Student
{
	char* name;
	char* last_name;
	int phone;
	int* exams = nullptr;//new int[0];
	int size = 0;
	Adress adress;

public:

	void SetName(char* name);
	void SetLastName(char* last_name);
	void SetPhone(int phone);
	void SetExams(int mark);
	void SetAdress(char* city, char* street, int house, int room);


	char* GetName()const;
	char* GetLastName()const;
	int   GetPhone()const;
	Adress GetAdress();

	//Student();
	Student():name(nullptr), last_name(nullptr), phone(0) {};
	Student(char* name, char* last_name, int phone,Adress adress);
	Student(char* name, char* last_name);

	//конструктор копирования
	Student(const Student & original):Student(original.name, original.last_name, original.phone, original.adress) {};
	~Student();

	void  ShowExams();

};

