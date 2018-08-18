#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;
struct Tank {
	char name[10];
	int health;
	int toplevo;
};
enum ConsoleColor
{
	Black = 0,
	Blue = 1,
	Green = 2,
	Cyan = 3,
	Red = 4,
	Magenta = 5,
	Brown = 6,
	LightGray = 7,
	DarkGray = 8,
	LightBlue = 9,
	LightGreen = 10,
	LightCyan = 11,
	LightRed = 12,
	LightMagenta = 13,
	Yellow = 14,
	White = 15
};
void SetColor(ConsoleColor text, ConsoleColor background) {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}
int main() {
	Tank Monster = { "Monster",100,100 };
	SetColor(Red, Green);
	int Pole[25][25] = {
		{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
	{ 1,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
	{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 }
	};
	int t = 2;
	int m = 3;
	int zap = 4;
	int ap = 5;
	int l = 9;
	srand(time(NULL));
	int v1 = 0;
	int v2 = 0;
	int w = 0;
	for (int f = 0; f < 5; f++) {
		v1 = rand() % (24 - 2) + 2;
		v2 = rand() % (24 - 1) + 1;
		Pole[v1][v2] = l;
		w++;
	}
	int x = 0;
	int y = 0;
	for (int f = 0; f < 10; f++) {
		x = rand() % (24 - 2) + 2;
		y = rand() % (24 - 1) + 1;
		Pole[x][y] = m;
	}
	int x1 = 0;
	int y1 = 0;
	for (int f = 0; f < 2; f++) {
		x1 = rand() % (24 - 2) + 2;
		y1 = rand() % (24 - 1) + 1;
		Pole[x1][y1] = zap;
	}
	int x2 = 0;
	int y2 = 0;
	for (int f = 0; f < 2; f++) {
		x2 = rand() % (24 - 2) + 2;
		y2 = rand() % (24 - 1) + 1;
		Pole[x2][y2] = ap;
	}
	int x3 = 1;
	int y3 = rand() % (24 - 1) + 1;
	cout << "Zadacha: Pereexat vrajeskie okopi\n";
	cout << (char)254 << "  - tank\n ";
	cout << (char)253 << " - mina\n ";
	cout << (char)208 << " - zapravochnaya\n ";
	cout << (char)206 << " - aptechka\n ";
	cout << endl;
	cout << (char)222 << " - okop\n ";
	cout << endl;
	Pole[x3][y3] = t; // начальная позиция танка, выезд из гаража
O:
	if (Monster.health <= 0) {
		cout << "\tGame over" << endl;
		cout << "Tank unichtojen\n";
	}
	else if (Monster.toplevo <= 0) {
		cout << "\tGame over" << endl;
		cout << "Zakonchelos toplevo\n";
	}
	else if (w <= 0) {
		cout << "Pobeda!" << endl;
	}
	else {
		for (int i = 0; i < 25; i++) {
			for (int j = 0; j < 25; j++) {
				switch (Pole[i][j]) {
				case 1:cout << (char)178; //граница
					break;
				case 0:cout << " ";  //поле
					break;
				case 2:cout << (char)254; //tank
					break;
				case 3:cout << (char)253; //mina
					break;
				case 4:cout << (char)208;//zapravka
					break;
				case 5:cout << (char)206;//aptechka
					break;
				case 6:cout << (char)217;//Garaj
					break;
				case 9:cout << (char)222;//okop
					break;
				}

			}
			cout << "\n";
		}
		cout << "\t" << "Health:" << Monster.health << endl;
		cout << "\t" << "Toplevo:" << Monster.toplevo << endl;
		cout << "\t" << "Okopov ostalos:" << w << endl;
	}
	int xx3 = 0;
	int yy3 = 0;
	int &c = x3;
	int &c1 = y3;
	int code = _getch();

	if (code == 224)
		code = _getch();
	switch (code)
	{
	case 72:xx3 = c; yy3 = c1;
		if (xx3 == 1) {
			system("cls");
			goto O;
			break;
		}
		if (Pole[xx3 - 1][yy3] == 3) {
			Monster.health = Monster.health - 20;
		}
		else if (Pole[xx3 - 1][yy3] == 4) {
			Monster.toplevo = Monster.toplevo + 50;
		}
		else if (Pole[xx3 - 1][yy3] == 5) {
			Monster.health = Monster.health + 25;
		}
		else if (Pole[xx3 - 1][yy3] == 9) {
			w--;
		}
		Pole[xx3 - 1][yy3] = t;  //Vverx
		xx3--;
		Pole[c][c1] = 0;
		c = xx3; c1 = yy3;
		Monster.toplevo = Monster.toplevo - 2;
		system("cls");
		goto O;
		break;
	case 77:xx3 = c; yy3 = c1;
		if (yy3 == 23) {
			system("cls");
			goto O;
			break;
		}
		if (Pole[xx3][yy3 + 1] == 3) {
			Monster.health = Monster.health - 20;
		}
		else if (Pole[xx3][yy3 + 1] == 4) {
			Monster.toplevo = Monster.toplevo + 50;
		}
		else if (Pole[xx3][yy3 + 1] == 5) {
			Monster.health = Monster.health + 25;
		}
		else if (Pole[xx3][yy3 + 1] == 9) {
			w--;
		}
		Pole[xx3][yy3 + 1] = t; //Vpravo
		yy3++;
		Pole[c][c1] = 0;
		c = xx3; c1 = yy3;
		Monster.toplevo = Monster.toplevo - 2;
		system("cls");
		goto O;
		break;
	case 75:xx3 = c; yy3 = c1;
		if (yy3 == 1) {
			system("cls");
			goto O;
			break;
		}
		if (Pole[xx3][yy3 - 1] == 3) {
			Monster.health = Monster.health - 20;
		}
		else if (Pole[xx3][yy3 - 1] == 4) {
			Monster.toplevo = Monster.toplevo + 50;
		}
		else if (Pole[xx3][yy3 - 1] == 5) {
			Monster.health = Monster.health + 25;
		}
		else if (Pole[xx3][yy3 - 1] == 9) {
			w--;
		}
		Pole[xx3][yy3 - 1] = t;  //Vlevo
		yy3--;
		Pole[c][c1] = 0;
		c = xx3; c1 = yy3;
		Monster.toplevo = Monster.toplevo - 2;
		system("cls");
		goto O;
		break;
	case 80:xx3 = c; yy3 = c1;
		if (xx3 == 23) {
			system("cls");
			goto O;
			break;
		}
		if (Pole[xx3 + 1][yy3] == 3) {
			Monster.health = Monster.health - 20;
		}
		else if (Pole[xx3 + 1][yy3] == 4) {
			Monster.toplevo = Monster.toplevo + 50;
		}
		else if (Pole[xx3 + 1][yy3] == 5) {
			Monster.health = Monster.health + 25;
		}
		else if (Pole[xx3 + 1][yy3] == 9) {
			w--;
		}
		Pole[xx3 + 1][yy3] = t;  //Vniz
		xx3++;
		Pole[c][c1] = 0;
		c = xx3; c1 = yy3;
		Monster.toplevo = Monster.toplevo - 2;
		system("cls");
		goto O;
		break;
	}

	cout << "\n";
	system("pause");
	return 0;
}