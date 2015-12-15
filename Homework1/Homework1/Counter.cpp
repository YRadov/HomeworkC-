#include "Counter.h"
#include <iostream>
using namespace std;

void Counter::SetMin(int min)
{
	if (min < 0)
	{
		this->min = 0;
	}
	else if (min >= 99999)
	{
		this->min = 0;
	}
	else
	{
		this->min = min;
	}
}
void Counter::SetMax(int max)
{
	if (max > 99999)
	{
		this->max = 99999;
	}
	else if (max <= 0)
	{
		this->max = 99999;
	}
	else
	{
		this->max = max;
	}
}
void Counter::SetCurrent(int current)
{
	if (current < this->min)
	{
		this->current = this->min;
	}
	else if (current > this->max)
	{
		this->current = this->min;
	}
	else
	{
		this->current = current;
	}
}
void Counter::SetShift(int shift)
{
	if (shift <=0)
	{
		this->shift = 1;
	}
	else if (shift >= this->max)
	{
		this->shift = 1;
	}
	else
	{
		this->shift = shift;
	}
}

int Counter::GetMin()
{
	return this->min; 
}
int Counter::GetMax()
{
	return this->max;
}
int Counter::GetCurrent()
{
	return this->current;
}
int Counter::GetShift()
{
	return this->shift;
}

Counter::Counter(int min, int max, int current, int shift)
{
	SetMin(min);
	SetMax(max);
	SetCurrent(current);
	SetShift(shift);
};

Counter::~Counter()
{
	cout << "Destroying object\n";
}

//Изменить шаг
void Counter::ChangeShift(int flag)
{
	this->SetShift(flag);
}

//увеличение на заданный сдвиг
void Counter::MoveCounter(int change)
{
	//чтоб убрать целые обороты счетчика(и умножаем на текущий шаг)
	change = (change%this->max)*this->shift;

	if ((this->current + change) > this->max)
	{
		this->current = (this->current + change) - this->max;
	}
	else if (change < 0 && (this->current + change) < 0)
	{
		this->current = this->max + ( this->current + change);
	}
	else
	{
		this->current = this->current + change;
	}
}

//обнуление счетчика
void Counter::ResetCounter()
{
	this->current = this->min;
}

