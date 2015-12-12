#pragma once
#include <iostream>
using namespace std;


class Point
{
	int x;
	int y;

public:

	void SetX(int x)
	{
		try
		{
			if (x >= 0)
			{
				this->x = x;
			}
			else
			{
				this->x = 0;
				throw "Incorrect data - x!!!";
			}
		}
		catch (char*message)
		{
			cout << message << endl;
		}
	}

	int GetX() 
	{
		return this->x;
	}

	void SetY(int y)
	{
		try
		{
			if (y >= 0)
			{
				this->y = y;
			}
			else
			{
				this->y = 0;
				throw "Incorrect data - y!!!";
			}
		}
		catch (char*message)
		{
			cout << message << endl;
		}
	}

	int GetY()
	{
		return this->y;
	}

	//конструктор по-умолчанию
	Point():x(0),y(0){}
	//конструктор с параметрами
	Point(int x, int y)
	{
		SetX(x);
		SetY(y);
	}

	//движение точки
	void Move(int x,int y)
	{
		SetX(this->x + x);
		SetY(this->y + y);
	}


};