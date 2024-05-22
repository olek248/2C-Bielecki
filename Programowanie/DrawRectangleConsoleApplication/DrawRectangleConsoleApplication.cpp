// DrawRectangleConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <conio.h>

enum keyCode
{
	UP,
	DOWN,
	LEFT,
	RIGHT,
	ENTER

};
void setCursor(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void getConsolResolution(int& consoleWidth, int& consoleHeight)
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

	consoleWidth = csbi.srWindow.Right - csbi.srWindow.Left;
	consoleHeight = csbi.srWindow.Bottom - csbi.srWindow.Top;
}
void showConsoleCursor(bool showFlag)
{
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_CURSOR_INFO     cursorInfo;

	GetConsoleCursorInfo(out, &cursorInfo);
	cursorInfo.bVisible = showFlag; // set the cursor visibility
	SetConsoleCursorInfo(out, &cursorInfo);
}
struct cordinate
{
	
	
};


int main()
{
	cordinate vertice;
	vertice.x = 0;
	vertice.y = 0;
	char currentChar;
	do
	{
		switch (currentChar)
		{
		case 'w'
			vertice.y--;
			break;
		}
	} while (currentChar != 13);
}


	


