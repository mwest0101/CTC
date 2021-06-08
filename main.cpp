// consoleTextToColor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <windows.h>

using namespace std;


namespace {
	const char* spaces = " \t";
	const char* digits = "0123456789";
}
HANDLE hCon;

#define BLACK 0
#define BLUE 1
#define GREEN 2
#define CYAN 3
#define RED 4
#define MAGENTA 5
#define BROWN 6
#define LIGHTGREY 7
#define DARKGREY 8
#define LIGHTBLUE 9
#define LIGHTGREEN 10
#define LIGHTCYAN 11
#define LIGHTRED 12
#define LIGHTMAGENTA 13
#define YELLOW 14
#define WHITE 15
#define BLINK 128

void SetColor(int background, int foreground) {
	if (hCon == NULL)
		hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	int color_attribute;
	color_attribute = background;
	color_attribute = _rotl(color_attribute, 4) | foreground;
	SetConsoleTextAttribute(hCon, color_attribute);
}


int IntLen(const char* cstr) {
	int    k, n = 0;
	if (cstr) {
		n = strspn(cstr, spaces);
		cstr += n;
		if (*cstr == '-' || *cstr == '+')
			++cstr, ++n;
		k = strspn(cstr, digits);
		n = k ? n + k : 0;
	}
	return n;
}

bool isNumber(const char* cstr) {
	int    n = IntLen(cstr);
	if (n) {
		cstr += n;
		if (*cstr == 'e' || *cstr == 'E')
			n = strspn(++cstr, digits);
	}

	return n > 0;
}

int main(int argc, char* argv[]) {

	int color1, color2;

	if (argc > 1) {

		if (isNumber(argv[1])) {

			color1 = atoi(argv[1]);
		}
		else {
			color1 = 0;
		}

		if (isNumber(argv[2])) {
			color2 = atoi(argv[2]);
		}
		else {
			color2 = 7;
		}

		SetColor(color1, color2);
		int i = 3;
		for (i; i < argc; i++) {
			cout << argv[i];
			cout << " ";
		}
	}
	else {
		SetColor(0, 12);

		cout << "  _____                       _        \n";
		cout << " / ____|                     | |       \n";
		cout << "| |      ___  _ __  ___  ___ | | ___   \n";
		cout << "| |     / _ \\| '_ \\/ __|/ _ \\| |/ _ \\  \n";
		cout << "| |____| (_) | | | \\__ \\ (_) | |  __/  \n";
		cout << " \\_____|\\___/|_| |_|___/\\___/|_|\\___| \n\n";

		cout << " _______         _   \n";
		cout << "|__   __|       | |  \n";
		cout << "   | | _____  __| |_ \n";
		cout << "   | |/ _ \\ \\/ /| __|\n";
		cout << "   | |  __/>  < | |_ \n";
		cout << "   |_|\\___/_/\\_\\ \\__|\n\n";

		cout << "   _____       _            \n";
		cout << "  / ____|     | |           \n";
		cout << " | |      ___ | | ___  _ __ \n";
		cout << " | |     / _ \\| |/ _ \\| '__|\n";
		cout << " | |____| (_) | | (_) | |   \n";
		cout << "  \\_____|\\___/|_|\\___/|_|   \n\n";



		SetColor(0, 10);
		cout << "\n";
		cout << "Example: ctc [Back Color] [Font color] [Any text] \n\n";
		SetColor(7, 0);
		cout << "  0 = BLACK";
		SetColor(0, 1);
		cout << "\n";
		SetColor(0, 1);
		cout << "  1 = BLUE\n";
		SetColor(0, 2);
		cout << "  2 = GREEN\n";
		SetColor(0, 3);
		cout << "  3 = CYAN\n";
		SetColor(0, 4);
		cout << "  4 = RED\n";
		SetColor(0, 5);
		cout << "  5 = MAGENTA\n";
		SetColor(0, 6);
		cout << "  6 = BROWN\n";
		SetColor(0, 7);
		cout << "  7 = LIGHTGREY\n";
		SetColor(0, 8);
		cout << "  8 = DARKGREY\n";
		SetColor(0, 9);
		cout << "  9 = LIGHTBLUE\n";
		SetColor(0, 10);
		cout << "  10 = LIGHTGREEN\n";
		SetColor(0, 11);
		cout << "  11 = LIGHTCYAN\n";
		SetColor(0, 12);
		cout << "  12 = LIGHTRED\n";
		SetColor(0, 13);
		cout << "  13 = LIGHTMAGENTA\n";
		SetColor(0, 14);
		cout << "  14 = YELLOW\n";
		SetColor(0, 15);
		cout << "  15 = WHITE\n\n";
		SetColor(0, 14);
		cout << "Example \n";
		cout << "# ctc 7 0 Example test \n\n\n";
		SetColor(0, 8);
		cout << "(Developed by:                )\n";
		cout << "(Maurcio West                 )\n";
		cout << "(e-mail(mauriciopw@hotmail.com)\n";
		SetColor(0, 7);
		\
	}
	return 0;
}

