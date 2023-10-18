#pragma once
#include "Base.h"


class Villians : public Base
{
	string crime;
	string habitat;
public:


	void Setter_crime(string crime);
	string Getter_crime();

	void Setter_habitat(string habitat);
	string Getter_habitat();

	Villians(ifstream& file);
	Villians();
	


	void Show();

	void Edit();
	void Write_file(ofstream& file);
};
