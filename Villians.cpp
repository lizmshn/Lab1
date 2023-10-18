#include "Villians.h"


	void Villians::Setter_crime(string crime) { this->crime = crime; }
	string Villians::Getter_crime() { return crime; }

	void Villians::Setter_habitat(string habitat) { this->habitat = habitat; }
	string Villians::Getter_habitat() { return habitat; }

	void Villians:: Write_file(ofstream& file)
	{
		file << "Villians" << endl << Getter_name() << endl << Getter_weapon() << endl << Getter_crime() << endl << Getter_habitat() << endl << Getter_amount_skills() << endl;
		
		for (int i = 0; i < Getter_amount_skills(); i++)
		{
			file << Getter_basic_skills(i) << endl;
		}
	}

	Villians::Villians(ifstream& file)
	{
		string text;
		getline(file, text);
		Setter_name(text);
		getline(file, text);
		Setter_weapon(text);
		getline(file,text);
		Setter_crime(text);
		getline(file, text);
		Setter_habitat(text);
		int num = stoi(text);
		Setter_amount_skills(num);
		for (int i = 0; i < num; i++)
		{
			getline(file, text);
			Setter_basic_skills(text, i);
		}
	}

	Villians::Villians()
	{
		string text;
		cout << "!VILLIANS!" << endl;
		cout << "NAME: ";
		//cin >> text;
		getline(cin, text);
		Setter_name(text);
		cout << endl << "WEAPON: ";
		//cin >> text;
		getline(cin, text);
		Setter_weapon(text);

		cout << endl << "CRIME: ";
		//cin >> text;
		getline(cin, text);
		Setter_crime(text);

		cout << endl << "HABITAT: ";
		getline(cin, text);
		//cin >> text;
		Setter_habitat(text);

		cout << endl << "NUMBER BASIC SKILLS: ";
		string amount_skills;
	//	cin >> amount_skills;
		getline(cin, amount_skills);
		Setter_amount_skills(stoi(amount_skills));

		cout << endl << "BASIC SKILLS: " << endl;
		for (int i = 0; i < (stoi(amount_skills)); i++)
		{
			//cin >> text;
			getline(cin, text);
			Setter_basic_skills(text, i);
		}
	}


	void Villians::Show()
	{
		cout << "!VILLIANS!" << endl << "NAME: " << Getter_name() << endl << "WEAPON: " << Getter_weapon() << endl << "CRIME: " << Getter_crime() << endl << "HABITAT: " << Getter_habitat() << endl << "NUMBER BASIC SKILLS: " << Getter_amount_skills() << endl << "BASIC SKILLS: " << endl;
		for (int i = 0; i < Getter_amount_skills(); i++)
		{
			cout << i + 1 << ") ";
			cout << Getter_basic_skills(i) << endl;;
		}
	}


	void Villians::Edit()
	{
		Show();
		cout << endl << "WHAT CHANGE?" << endl;
		cout << "1) NAME" << endl << "2) WEAPON" << endl << "3) CRIME" << endl << "4) HABITAT" << endl << "5) BASIC SKILLS" << endl;
		string number;
	//	cin >> number;
		getline(cin, number);
		string text;
		switch (stoi(number))
		{
		case 1:
		{
			cout << "NAME: ";
			//cin >> text;
			getline(cin, text);
			Setter_name(text);
			break;
		}

		case 2:
		{
			cout << "WEAPON: ";
			getline(cin, text);
			//cin >> text;
			Setter_weapon(text);
			break;
		}

		case 3:
		{
			cout << "CRIME: ";
			//cin >> text;
			getline(cin, text);
			Setter_crime(text);
			break;
		}
		case 4:
		{
			cout << "HABITAT: ";
			getline(cin, text);
			//cin >> text;
			Setter_habitat(text);
			break;
		}

		case 5:
		{
			string amount;
			cout << "NUMBER BASIC SKILLS: ";
			//cin >> amount;
			getline(cin, amount);
			Setter_amount_skills(stoi(amount));
			cout << endl << "BASIC SKILLS: " << endl;
			for (int i = 0; i < stoi(amount); i++)
			{
				cout << i + 1 << ") ";
				//cin >> text;
				getline(cin, text);
				Setter_basic_skills(text, i);
			}
			break;
		}

		}
	}
