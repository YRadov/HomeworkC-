#pragma once
#include "Adress.h"
class Student
{
	int name;
	int middle_name;
	int last_name;
	int birthday;
	int phone;

public:
	Adress adress;

	Student() :name(0), middle_name(0), last_name(0), birthday(0), phone(0){};
	~Student();
};

