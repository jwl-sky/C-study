#include<iostream>
#include <string>
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
using namespace std;

int main() {
	string longs;
	int ma_longs;
	cout << "��������룺";
	HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO ConsoleScreenBufferInfo;
	GetConsoleScreenBufferInfo(hConsoleOutput, &ConsoleScreenBufferInfo);
	getline(cin, longs);
	ConsoleScreenBufferInfo.dwCursorPosition.X += longs.size();
	SetConsoleCursorPosition(hConsoleOutput, ConsoleScreenBufferInfo.dwCursorPosition);
	cout << "(long)";
	int temp=0;
	for (int i = 0; i != longs.size(); ++i)
	{
		if (isdigit(longs[i]))
		{
			temp = temp * 10 + (longs[i] - 48);
		}
	}
	ma_longs = 220 * temp;
	cout << endl<<longs << "���볤�ǣ�" <<ma_longs<< "(��)"<<endl;
	return 0;
}