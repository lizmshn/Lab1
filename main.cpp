#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#include <fstream>
#include "Keeper.h"
using namespace std;

#define UP 72
#define DOWN 80
#define ENTER 13
using namespace std;
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
void goToXY(short xx, short yy)
{
	SetConsoleCursorPosition(hStdOut, { xx,yy });
}
void consoleCursorVisible(bool show, short size)
{
	CONSOLE_CURSOR_INFO structCursorInfo;
	GetConsoleCursorInfo(hStdOut, &structCursorInfo);
	structCursorInfo.bVisible = show;
	structCursorInfo.dwSize = size;
	SetConsoleCursorInfo(hStdOut, &structCursorInfo);
}
int main()
{
	SetConsoleTitle(L"menu");
	ofstream out;
	ifstream in;
	out.open("result.txt");
	in.open("test.txt");
	consoleCursorVisible(false, 100);
	string menu[] = { "1. ADD", "2. DELETE", "3. EDIT", "4. SHOW ALL", "5. SAVE FILE", "6. READ FILE", "7. EXIT"};
	int activeMenu = 0;
	char ch;
	float x = 0;
	Keeper object;
	string k;

	int kolvo = 0;

	while (1)
	{
	int xx = 55, yy = 0;
	goToXY(xx, yy);
	for (int i = 0; i < size(menu); i++)
	{
	if (i == activeMenu)
	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE |
	FOREGROUND_INTENSITY);
	else
	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE);
	goToXY(xx, yy++);
	cout << menu[i] << endl;
	}
	ch = _getch();
	if (ch == -32)
	ch = _getch();
	switch (ch)
	{
	case UP:
	if (activeMenu > 0)
	--activeMenu;
	break;
	case DOWN:
	if (activeMenu < size(menu) - 1)
	++activeMenu;
	break;
	case ENTER:
	switch (activeMenu)
	{
	case 0:
		system("cls");
		cout << "1 GOODIES" <<endl<< "2 VILLIANS"<<endl << "3 MONSTERS" << endl<<"CHOOSE NUMBER:";
		//cin >> k;
		getline(cin, k);
		if (stoi(k) > 0 && stoi(k) <= 3)
		{
			cout << endl << endl;
			object + (stoi(k));
			kolvo++;
		}
		else
		{
			system("cls");
			cout << "ERROR!" << endl;

		}
		break;
	case 1:
		system("cls");
		if(kolvo!=0)
		{ 
			object.Show_all();
			cout << "CHOOSE: ";
			//cin >> k;
			getline(cin, k);
			if (stoi(k)>0 && stoi(k) <= kolvo)
			{
				object - stoi(k);
					kolvo--;
			}
			else
			{
				system("cls");
				cout << "ERROR!" << endl;
			}
		}
		else
		{
			system("cls");
			cout << "NO OBJECTS!" << endl;
		}
		break;
	case 2:
		system("cls");
		if (kolvo != 0)
		{
			object.Show_all();
			cout << "CHANGE: " << endl;
			string number;
			//cin >> number;
			getline(cin, number);
			if (stoi(k) > 0 && stoi(k) <= kolvo)
			object.Edit_element(stoi(number));
			else
			{
				system("cls");
				cout << "ERROR!" << endl;
			}
		}
		else
			cout << "EMPTY!" << endl;
		break;
	case 3:
		system("cls");
		if (kolvo != 0)
			object.Show_all();
		else
			cout << "EMPTY!" << endl;
		break;
	case 4:
		system("cls");
		object.Save_file();
		break;
	case 5:
		system("cls");
		kolvo+=(object.Read_file());

		break;
	case 6:
		exit(0);
	default:
		break;
	}
	default:
		break;
	}
	}

	}








