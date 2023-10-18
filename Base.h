#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Base
{
	string name;
	string* basic_skills;
	int amount_skills;
	string weapon;
public:
	Base();
	~Base();
	void Setter_name(string name);
	string Getter_name();

	void Setter_amount_skills(int amount_skills);
	int Getter_amount_skills();


	void Setter_weapon(string weapon);
	string Getter_weapon();

	void Setter_basic_skills(string basic_skills, int amount_skills);
	string Getter_basic_skills(int amount_skills);

	virtual void Show() = 0;
	virtual void Edit() = 0;
	virtual void Write_file(ofstream& file) = 0;

};
