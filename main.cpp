



#include <iostream>


using namespace std;


class Base
{
	string name;
public:
	void Setter_name(string name) { this->name = name; }
	string Getter_name() { return name; }

	virtual void Show() = 0;

	
};


class Goodies : public Base
{
	string weapon;
	string basic_skills;
public:
	void Setter_weapon(string weapon) { this->weapon = weapon; }
	string Getter_weapon() { return weapon; }

	void Setter_basic_skills(string basic_skills) { this->basic_skills = basic_skills; }
	string Getter_basic_skills() { return basic_skills; }

	void Show() override{cout << "GG" << endl;}
};

class Villians : public Base
{
	string weapon;
	string basic_skills;
	string crime;
	string habitat;
public:
	void Setter_weapon(string weapon) { this->weapon = weapon; }
	string Getter_weapon() { return weapon; }

	void Setter_basic_skills(string basic_skills) { this->basic_skills = basic_skills; }
	string Getter_basic_skills() { return basic_skills; }

	void Setter_crime(string crime) { this->crime = crime; }
	string Getter_crime() { return crime; }

	void Setter_habitat(string habitat) { this->habitat = habitat; }
	string Getter_habitat() { return habitat; }

	void Show() override{cout << "VV" << endl;}
};

class Monsters : public Base
{
	string appearance;
public:
	void Setter_appearance(string appearance) { this->appearance = appearance; }
	string Getter_appearance() { return appearance; }

	void Show() override{cout << "MM" << endl;}
};

class Keeper
{
	Base** array;
	int size;
public:
	void Foo(Base* f){f->Show();}
	void Setter_size(int size) { this->size = size; }
	int Getter_size() { return size; }


	Keeper() {};
	~Keeper() { delete array; }
	Keeper(const Keeper& object)//конструктор копирования
	{
		this->array = new Base * [object.size];

		for (int i = 0; i < object.size; i++)
		{
			array[i] = object.array[i];
		}
	}
	void Show_all()// вывод всего списка 
	{
		for (int i = 0; i < size; i++)
		{
			cout << i + 1 << ".";
			array[i]->Show();
			cout << endl << endl;
		}

	}



};


int main()
{
	int n = 0;
	cout << "1. ADD" << endl << "2. DELETE" << endl;
	int num = 0;
	string name;
	while (1)
	{
		cout << "VVOD" << endl;
		cin >> num;
		if (num == 1)
		{
			cin >> name;
			Monsters* newMonster = new Monsters;
			newMonster->Setter_name(name);
			n++;
			cout << "GGG" << endl;
			cout << newMonster->Getter_name() << endl;;
			
		}
		if (num == 2)
		{

		}

	}
	return 0;
}





