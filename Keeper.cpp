#include "Keeper.h"


	void Keeper::Setter_size(int size) { this->size = size; }
	int Keeper::Getter_size() { return size; }

	
	Keeper::~Keeper() { delete array; }
	Keeper::Keeper(const Keeper& object)
	{
		this->array = new Base * [object.size];

		for (int i = 0; i < object.size; i++)
		{
			array[i] = object.array[i];
		}
	}
	void Keeper::Show_all()
	{
		for (int i = 0; i < Getter_size(); i++)
		{
			cout << i + 1 << " ";
			array[i]->Show();
			cout << endl << endl;
		}

	}

	void Keeper::Edit_element(int num)
	{
		array[num - 1]->Edit();

	}

	Keeper Keeper:: operator +(int number)
	{
		Keeper buffer(*this);
		Setter_size(Getter_size() + 1);
		array = new Base * [size];
		for (int i = 0; i < Getter_size() - 1; i++)
		{
			array[i] = buffer.array[i];
		}
		switch (number)
		{
		case 1: 
		{
			array[Getter_size() - 1] = new Goodies();
			break;
		}

		case 2: 
		{
			array[Getter_size() - 1] = new Villians();
			break;
		}

		case 3: 
		{
			array[Getter_size() - 1] = new Monsters();
			break; 
		}

		}
	
		return*this;
	}
	Keeper::Keeper(int i){}
	Keeper Keeper:: operator-(int number)
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


	void Keeper::Save_file()
	{
		ofstream file;


		string text;
		string test_file = "test.txt";
		try
		{
			file.open(test_file);
			if (!file.is_open())
				throw (test_file);
		}
		catch (string error)
		{
			cout << "ERROR: " << error << endl;
			return ;
		}
		cout << "SAVING SUCCESSFULLY TO FILE" << endl;
		file << size << endl;
		for (int i = 0; i < size; i++)
		{
			array[i]->Write_file(file);
		}

	}


	int Keeper::Read_file()
	{
		string text;
		string test_file="test.txt";
		ifstream file;
		try
		{
			file.open(test_file);
			if (!file.is_open())
				throw (test_file);
		}
		catch (string error)
		{
			cout << "ERROR: "<<error << endl;
			return 0;
		}
		
		getline(file, text);
		int amount = stoi(text);
		Setter_size(amount);
		array = new Base * [amount];
		getline(file, text);
		int i = 0;
		while (!file.eof() && i < amount)
		{
			if (text == "Goodies")
			{
				array[i] = new Goodies(file);
				i++;
			}
			if (text == "Villians")
			{
				array[i] = new Villians(file);
				i++;
			}
			if (text == "Monsters")
			{
				array[i] = new Monsters(file);
				i++;
			}
			getline(file, text);
		}
		cout << "FILE OPENED SUCCESSFULLY" << endl;
		return amount;
	}