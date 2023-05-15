// Includes standard input/output stream library
#include <iostream>
// Includes time library for getting time and localtime functions
#include <ctime>
// Includes Windows library for console text attribute manipulation
#include <Windows.h>
using namespace std;

int main() {
    // Get handle to console window
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    // Set console text color to blue
    SetConsoleTextAttribute(hConsole, 10);

	// Welcome message
    cout << "Hello!!!\nWelcome to my project!\n\nShort description:\nThis C++ code is a program that displays the current day, hour, month, and year in the console.\n\nPress any key to continue...";
    getchar();

    cout << "\n--------------------------------\n";

    // Get current time
    time_t current_time = time(nullptr);
    // Convert current time to local time
    struct tm* local_time = localtime(&current_time);

    // Get current day
    int day = local_time->tm_mday;
    // Get current hour
    int hour = local_time->tm_hour;
    // Get current minutes
    int minutes = local_time->tm_min;
    // Get current month (0-based, so adding 1)
    int month = local_time->tm_mon + 1;
    // Get current year (year since 1900, so adding 1900)
    int year = local_time->tm_year + 1900;

    // Print current hour, day, month, and year
    cout << "Current hour: " << hour << ":" << minutes << endl;
	cout << "Current day: " << day << endl;
    cout << "Current month: " << month << endl;
    cout << "Current year: " << year << "\n\nPress any key to continue...";
	getchar();

    cout << "--------------------------------\n";

    // End program
    cout << "Thank you for using my program!\n\nCode by: D4rK;\nVersion: 1.0;\nProgramming language: C++;\n\nCopyright " << year << " by D4rK, made with <3 in Romania!";
    return 0;
}