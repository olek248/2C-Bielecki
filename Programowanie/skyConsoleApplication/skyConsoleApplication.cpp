#include <iostream>
#include <windows.h>
#include <conio.h>

void setCursor(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void showConsoleCursor(bool showFlag)
{
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_CURSOR_INFO     cursorInfo;

	GetConsoleCursorInfo(out, &cursorInfo);
	cursorInfo.bVisible = showFlag; // set the cursor visibility
	SetConsoleCursorInfo(out, &cursorInfo);
}
void getConsolResolution(int& consoleWidth, int& consoleHeight)
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

	consoleWidth = csbi.srWindow.Right - csbi.srWindow.Left;
	consoleHeight = csbi.srWindow.Bottom - csbi.srWindow.Top;
}
int main()
{
	srand(time(0));
	int x, y;
	void getConsolResolution(int& consoleWidth, int& consoleHeight);
	
	while (true)
	{
		
		std::cout << "*";

	}

}

	

