#pragma once
#include "Adress.h"
class Student
{
	int name = 0;
	int middle_name=0;
	int last_name=0;
	int birthday=0;
	int phone=0;

public:
	Adress adress;

	Student();
	~Student();
};

