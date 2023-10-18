#include "Goodies.h"


Goodies::Goodies()
	{
		string text;
		cout << "!GOODIES!" << endl;
		cout << "NAME: ";
		//cin >> text;
		getline(cin, text);
		Setter_name(text);
		cout << endl << "WEAPON: ";
		//cin >> text;
		getline(cin, text);
		Setter_weapon(text);

		cout << endl << "NUMBER BASIC SKILLS: ";
		string amount_skills;
		//cin >> amount_skills;
		getline(cin, amount_skills);
		
				Setter_amount_skills(stoi(amount_skills));

				cout << endl << "BASIC SKILLS: " << endl;
				for (int i = 0; i < stoi(amount_skills); i++)
				{
					cout << i + 1 << ") ";
				//	cin >> text;
					getline(cin, text);
					Setter_basic_skills(text, i);
				}
			
			
	
	}
Goodies::Goodies(ifstream& file)
{
	string text;
	getline(file, text);
	Setter_name(text);
	getline(file, text);
	Setter_weapon(text);
	int num = stoi(text);
	Setter_amount_skills(num);
	for (int i = 0; i < num; i++)
	{
		getline(file, text);
		Setter_basic_skills(text, i);
	}
}
	void Goodies::Show()
	{
		cout << "!GOODIES!" << endl << "NAME: " << Getter_name() << endl << "WEAPON: " << Getter_weapon() << endl << "NUMBER BASIC SKILLS: " << Getter_amount_skills() << endl << "BASIC SKILLS: " << endl;

		
			for (int i = 0; i < Getter_amount_skills(); i++)
			{
				cout << i + 1 << ") ";
				cout << Getter_basic_skills(i) << endl;
			}
		

	}

	void Goodies::Write_file(ofstream& file)
	{
		file << "Goodies" << endl << Getter_name() << endl << Getter_weapon()<< endl << Getter_amount_skills() << endl;

		for (int i = 0; i < Getter_amount_skills(); i++)
		{
			file << Getter_basic_skills(i) << endl;
		}
	}

	void Goodies:: Edit()
	{
		Show();
		cout << endl << "WHAT CHANGE?" << endl;
		cout << "1) NAME" << endl << "2) WEAPON" << endl << "3) BASIC SKILLS" << endl;
		string number;
	//	cin >> number;
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
			//cin >> text;
			getline(cin, text);
			Setter_weapon(text);
			break;
		}

		case 3:
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
