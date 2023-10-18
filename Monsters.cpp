#include "Monsters.h"


	void Monsters::Setter_appearance(string appearance) { this->appearance = appearance; }
	string Monsters::Getter_appearance() { return appearance; }
	Monsters::Monsters()
	{
		string text;
		cout << "NAME:" << endl;
	//cin >> text;
		getline(cin, text);
		Setter_name(text);

		cout << endl << "APPEARANCE:";
		getline(cin, text);
		Setter_appearance(text);

	}
	void Monsters::Show()
	{
		cout << "!MONSTERS!" << endl << "NAME: " << Getter_name() << endl << "APPEARANCE: " << Getter_appearance() << endl;
	}
	void Monsters::Edit()
	{
		Show();
		cout << endl << "WHAT CHANGE?" << endl;
		cout << "1) NAME" << endl << "2) APPEARANCE" << endl;
		string number;
		//cin >> number;
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
			cout << "APPEARANCE: ";
			getline(cin, text);
			//cin >> text;
			Setter_appearance(text);
			break;
		}

		}
	}
	void Monsters::Write_file(ofstream& file){file << "Monsters" << endl << Getter_name() << endl << Getter_appearance()<<endl;}
	Monsters::Monsters(ifstream& file)
	{
		string text;
		getline(file, text);
		Setter_name(text);
		getline(file, text);
		Setter_appearance(text);
	}