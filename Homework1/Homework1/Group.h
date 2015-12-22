#pragma once
#include "Student.h"

class Group
{

	//массив студентов
	Student** students = nullptr;
	//кол-во человек в группе
	int qty = 0;
	//название группы
	char* specialty = nullptr;
	//специальность
	char* name_group = nullptr;
	//номер курса
	int kurs = 1;
	

public:
	Group();
	~Group();
};

