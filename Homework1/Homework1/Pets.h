#pragma once
using namespace std;

enum Type { DOG, CAT, RABBIT, PARROT };
enum Tail { LONG, SHORT };


class Pets
{

public:

	//тип животного
	Type type;
	//кличка
	char*nickname;
	//количество лап
	int legs;
	//есть ли крылья
	bool wings;
	//длинный или короткий хвост
	Tail tail;

	void SetType(Type type)
	{
		this->type = type;
	}

	void SetNickname(char*nickname)
	{
		this->nickname = nickname;
	}

	void SetLegs(int legs)
	{
		this->legs = legs;
	}

	void SetWings(bool wings)
	{
		this->wings = wings;
	}

	void SetTail(Tail tail)
	{
		this->tail = tail;
	}


	Pets(Type type, char*nickname, int legs, bool wings, Tail tail)
	{
		SetType(type);

		SetNickname(nickname);

		SetLegs(legs);

		SetWings(wings);

		SetTail(tail);

	};

	char* GetType(Type type)
	{
		char*kinde;
		switch (type)
		{
		case 0:
			kinde = "DOG";
			break;
		case 1:
			kinde = "CAT";
			break;

		case 2:
			kinde = "RABBIT";
			break;

		case 3:
			kinde = "PARROT";
			break;

		default:
			break;
		}
		return kinde;
	}

	char* HasWings(bool wings)
	{
		if (wings)
			return "has";
		else
			return "has not";
	}

	char* CanFly(bool wings)
	{
		if (wings)
			return "fly";
		else
			return "run";

	}

};
