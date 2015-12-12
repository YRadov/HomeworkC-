#include "Point.h"
#include "Pets.h"
#include <iostream>
using namespace std;

void main()
{
//*********************************************************************	
//                   1 Класс Point
//*********************************************************************	
	cout << "---------TASK 1----------------\n";
	int x, y;
	//конструктор по-умолчанию
	Point a1;
	cout << "Default constructor\n";
	cout << "a1.x = " << a1.GetX() << endl;
	cout << "a1.y = " << a1.GetY() << endl;
	cout << "-------------------------------\n";
	//конструктор с параметрами
	cout << "Constructor this params\n";
	cout << "Enter the coordinates of a new point:\n";
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	Point a2(x, y);
	cout << "a2.x = " << a2.GetX() << endl;
	cout << "a2.y = " << a2.GetY() << endl;
	cout << "-------------------------------\n";
	//работа сеттеров
	cout << "Setters work:\n";
	cout << "Enter new coordinates for point1:\n";
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	a1.SetX(x);
	a1.SetY(y);
	cout << "a1.x = " << a1.GetX() << endl;
	cout << "a1.y = " << a1.GetY() << endl;
	cout << "-------------------------------\n";
	//перемещение точки
	cout << "Point movement\n";
	cout << "Enter offsets for point1:\n";
	cout << "dx = ";
	cin >> x;
	cout << "dy = ";
	cin >> y;
	a1.Move(x, y);
	cout << "New coordinates for point1:\n";
	cout << "a1.x = " << a1.GetX() << endl;
	cout << "a1.y = " << a1.GetY() << endl;
	cout << "-------------------------------\n";
	cout << "-------------------------------\n";


//*********************************************************************	
//                   2 Класс Pets
//*********************************************************************	
	cout << "---------TASK 2----------------\n";
	Pets pet1(DOG,"Viva",4,false, LONG);
	cout << "pet1 is a " << pet1.GetType(pet1.type)
		<< "; \nit`s nickname is " << pet1.nickname
		<< "; \nit has " << pet1.legs << " legs;"
		<< "\nit " << pet1.HasWings(pet1.wings) << " wings;"
		<< "\nit can "<< pet1.CanFly(pet1.wings)<<"."<< endl;
	cout << "-------------------------------\n";
	Pets pet2(PARROT, "Chak", 2, true, LONG);
	cout << "pet2 is a " << pet2.GetType(pet2.type)
		<< "; \nit`s nickname is " << pet2.nickname
		<< "; \nit has " << pet2.legs << " legs;"
		<< "\nit " << pet2.HasWings(pet2.wings) << " wings;"
		<< "\nit can " << pet2.CanFly(pet2.wings) << "." << endl;
	cout << "-------------------------------\n";
	cout << "-------------------------------\n";
}