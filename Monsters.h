#pragma once
#include "Base.h"

class Monsters : public Base
{
	string appearance;
public:
	void Setter_appearance(string appearance);
	string Getter_appearance();
	Monsters();
	Monsters(ifstream& file);

	void Show();
	void Edit();
	void Write_file(ofstream& file);
};
