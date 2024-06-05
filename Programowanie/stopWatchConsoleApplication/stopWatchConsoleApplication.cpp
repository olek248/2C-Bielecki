#include <iostream>
#include <conio.h>
#include <windows.h>

void showConsoleCursor(bool showFlag)
{
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_CURSOR_INFO     cursorInfo;

	GetConsoleCursorInfo(out, &cursorInfo);
	cursorInfo.bVisible = showFlag; // set the cursor visibility
	SetConsoleCursorInfo(out, &cursorInfo);
}
int main()
{
	setlocale(LC_CTYPE, "polish");

	std::cout << "naciœnij enter by rozpocz¹æ program\n";
}


