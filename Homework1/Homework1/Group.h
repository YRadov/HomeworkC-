#pragma once
#include "Student.h"

class Group
{

	//������ ���������
	Student** students = nullptr;
	//���-�� ������� � ������
	int qty = 0;
	//�������� ������
	char* specialty = nullptr;
	//�������������
	char* name_group = nullptr;
	//����� �����
	int kurs = 1;
	

public:
	Group();
	~Group();
};

