#include <iostream>
#include <string>


using namespace std;


class Base
{
	string name;
	string* basic_skills;
	int amount_skills;
	string weapon;
public:
	void Setter_name(string name) { this->name = name; }
	string Getter_name() { return name; }

	void Setter_amount_skills(int amount_skills) { this->amount_skills = amount_skills; basic_skills = new string[amount_skills]; }
	int Getter_amount_skills() { return amount_skills; }


	void Setter_weapon(string weapon) { this->weapon = weapon; }
	string Getter_weapon() { return weapon; }

	void Setter_basic_skills(string basic_skills, int amount_skills) { this->basic_skills[amount_skills] = basic_skills; }
	string Getter_basic_skills(int amount_skills) { return basic_skills[amount_skills]; }

	virtual void Show() = 0;
	virtual void Edit() = 0;

	
};


class Goodies : public Base
{
public:
	Goodies()
	{
		string text;
		cout << "!GOODIES!" << endl;
		cout << "NAME: ";
		cin >> text;
		Setter_name(text);
		cout << endl << "WEAPON: ";
		cin >> text;
		Setter_weapon(text);

		cout << endl << "NUMBER BASIC SKILLS: ";
		int amount_skills;
		cin >> amount_skills;
		Setter_amount_skills(amount_skills);

		cout << endl << "BASIC SKILLS: " << endl;
		for (int i = 0; i < amount_skills; i++)
		{
			cout << i+1 << ") ";
			cin >> text;
			Setter_basic_skills(text, i);
		}
	}

	void Show()
	{
		cout << "!GOODIES!" << endl << "NAME: " << Getter_name() << endl << "WEAPON: " << Getter_weapon() << endl << "NUMBER BASIC SKILLS: " << Getter_amount_skills() << endl << "BASIC SKILLS: "<<endl;

		for (int i = 0; i < Getter_amount_skills(); i++)
		{
			cout << i + 1 << ") ";
			cout << Getter_basic_skills(i) << endl;
		}

	}

	void Edit()
	{
		Show();
		cout << endl << "WHAT CHANGE?" << endl;
		cout << "1) NAME" << endl << "2) WEAPON" << endl << "3) BASIC SKILLS" << endl;
		int number;
		cin >> number;
		string text;
		switch (number)
		{
		case 1: 
		{
			cout << "NAME: ";
			cin >> text;
			Setter_name(text);
			break;
		}
		case 2: 
		{
			cout << "WEAPON: ";
			cin >> text;
			Setter_weapon(text);
			break;
		}

		case 3: 
		{
			int amount;
			cout << "NUMBER BASIC SKILLS: ";
			cin >> amount;
			Setter_amount_skills(amount);
			cout << endl << "BASIC SKILLS: " << endl;
			for (int i = 0; i < amount; i++)
			{
				cout << i + 1 << ") ";
				cin >> text;
				Setter_basic_skills(text, i);
			}
			break;
		}
		}
	}
};

class Villians : public Base
{
	string crime;
	string habitat;
public:
	

	void Setter_crime(string crime) { this->crime = crime; }
	string Getter_crime() { return crime; }

	void Setter_habitat(string habitat) { this->habitat = habitat; }
	string Getter_habitat() { return habitat; }

	
	Villians()
	{
		string text;
		cout << "!VILLIANS!" << endl;
		cout << "NAME: ";
		cin >> text;
		Setter_name(text);
		cout << endl << "WEAPON: ";
		cin >> text;
		Setter_weapon(text);

		cout << endl << "CRIME: ";
		cin >> text;
		Setter_crime(text);

		cout << endl << "HABITAT: ";
		cin >> text;
		Setter_habitat(text);

		cout << endl << "NUMBER BASIC SKILLS: ";
		int amount_skills;
		cin >> amount_skills;
		Setter_amount_skills(amount_skills);

		cout << endl << "BASIC SKILLS: " << endl;
		for (int i = 0; i < amount_skills; i++)
		{
			cin >> text;
			Setter_basic_skills(text, i);
		}
	}


	void Show()
	{
		cout << "!VILLIANS!" << endl << "NAME: " << Getter_name() << endl << "WEAPON: " << Getter_weapon() << endl << "CRIME: " << Getter_crime() << endl << "HABITAT: " << Getter_habitat() << endl << "NUMBER BASIC SKILLS: " << Getter_amount_skills() << endl << "BASIC SKILLS: " << endl;
		for (int i = 0; i < Getter_amount_skills(); i++)
		{
			cout << i + 1 << ") ";
			cout << Getter_basic_skills(i) << endl;;
		}
	}


	void Edit()
	{
		Show();
		cout<<endl << "WHAT CHANGE?" << endl;
		cout << "1) NAME" << endl << "2) WEAPON" << endl << "3) CRIME" << endl << "4) HABITAT" << endl << "5) BASIC SKILLS" << endl;
		int number;
		cin >> number;
		string text;
		switch (number)
		{
		case 1:
		{
			cout << "NAME: ";
			cin >> text;
			Setter_name(text);
			break;
		}

		case 2:
		{
			cout << "WEAPON: ";
			cin >> text;
			Setter_weapon(text);
			break;
		}

		case 3:
		{
			cout << "CRIME: ";
			cin >> text;
			Setter_crime(text);
			break;
		}
		case 4:
		{
			cout << "HABITAT: ";
			cin >> text;
			Setter_habitat(text);
			break;
		}

		case 5:
		{
			int amount;
			cout << "NUMBER BASIC SKILLS: ";
			cin >> amount;
			Setter_amount_skills(amount);
			cout << endl << "BASIC SKILLS: " << endl;
			for (int i = 0; i < amount; i++)
			{
				cout << i + 1 << ") ";
				cin >> text;
				Setter_basic_skills(text, i);
			}
			break;
		}

		}
	}
};

class Monsters : public Base
{
	string appearance;
public:
	void Setter_appearance(string appearance) { this->appearance = appearance; }
	string Getter_appearance() { return appearance; }
	Monsters()
	{
		string text;
		cout << "NAME: ";
		cin >> text;
		Setter_name(text);
		cout << endl << "APPEARANCE: ";
		cin >> text;
		Setter_appearance(text);

	}
	void Show()
	{
		cout << "!MONSTERS!" << endl << "NAME: " << Getter_name() << endl << "APPEARANCE: " << Getter_appearance() << endl;
	}
	void Edit()
	{
		Show();
		cout << endl << "WHAT CHANGE?" << endl;
		cout << "1) NAME" << endl << "2) APPEARANCE" << endl;
		int number;
		cin >> number;
		string text;
		switch (number)
		{
		case 1:
		{
			cout << "NAME: ";
			cin >> text;
			Setter_name(text);
			break;
		}

		case 2:
		{
			cout << "APPEARANCE: ";
			cin >> text;
			Setter_appearance(text);
			break;
		}

		}
	}

};

class Keeper
{
	Base** array;
	int size;
public:

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
	void Show_all()
	{
		for (int i = 0; i < size; i++)
		{
			cout << i + 1 << " ";
			array[i]->Show();
			cout << endl << endl;
		}

	}

	void Edit_element(int num)
	{
		array[num - 1]->Edit();
	
	}

	Keeper operator +(int number)
	{
		Keeper buffer(*this);
		Setter_size(Getter_size() + 1);
		array = new Base * [size];
		for (int i = 0; i < Getter_size()-1; i++)
		{
			array[i] = buffer.array[i];
		}
		switch (number)
		{
		case 1: {array[Getter_size() - 1] = new Goodies(); break; }

		case 2: {array[Getter_size() - 1] = new Villians(); break; }

		case 3: {array[Getter_size() - 1] = new Monsters(); break; }

		}
		return*this;
	}

	Keeper operator-(int number)
	{
		Keeper buffer(*this);
		Setter_size(Getter_size() - 1);
		array = new Base * [Getter_size()];
		for (int i = 0; i < number - 1; i++)
		{
			array[i] = buffer.array[i];
		}
		for (int i = number - 1; i < Getter_size(); i++)
		{
			array[i] = buffer.array[i + 1];
		}
		return*this;
	}



};


int main()
{
	int a;
	Keeper object;
	while (1)
	{
		cin >> a;
		if (a == 1)
		{
			int i;
			cout << "1G" << "2V" << "3M" << endl;
			cin >> i;
			object + i;
			
		}
		if (a == 2)
		{
			object.Show_all();
		}
		if (a == 3)
		{
			int i;
			object.Show_all();
			cout << "CHOSE" << endl;
			cin >> i;
			object - i;
		}
		if (a == 4)
		{
			object.Show_all();
			cout << "CHANGE" << endl;
			int number;
			cin >> number;
			object.Edit_element(number);

		}
	}
	return 0;
}