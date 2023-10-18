
#include "Base.h"



	void Base::Setter_name(string name) { this->name = name; }
	string Base:: Getter_name() { return name; }

	void Base::Setter_amount_skills(int amount_skills) { this->amount_skills = amount_skills; basic_skills = new string[amount_skills]; }
	int Base ::Getter_amount_skills() { return amount_skills; }


	void Base :: Setter_weapon(string weapon) { this->weapon = weapon; }
	string Base::Getter_weapon() { return weapon; }

	void Base::Setter_basic_skills(string basic_skills, int amount_skills) { this->basic_skills[amount_skills] = basic_skills; }
	string Base::Getter_basic_skills(int amount_skills) { return basic_skills[amount_skills]; }

	Base ::~Base() {};
	Base ::Base() {};

