#pragma once
#include "Base.h"


class Goodies : public Base
{
public:
	Goodies();
	Goodies(ifstream& file);

void Show();

void Edit();
void Write_file(ofstream& file);
	
};






