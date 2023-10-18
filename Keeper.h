#pragma once
#include "Base.h"
#include "Goodies.h"
#include "Monsters.h"
#include "Villians.h"

class Keeper
{
	Base** array;
	int size;
public:

	void Setter_size(int size);
	int Getter_size();


	Keeper() {};
	~Keeper();
	Keeper(const Keeper& object);
	Keeper(int i);
	void Show_all();
	void Save_file();
	void Edit_element(int num);
	int Read_file();

	Keeper operator +(int number);

	Keeper operator-(int number);


};

