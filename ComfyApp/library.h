#pragma once

#include <iostream>
#include <string>
#include <windows.h>

using std::cout;
using std::endl;
using std::cin;
using std::string;

#define ukr_lang { SetConsoleCP(1251); SetConsoleOutputCP(1251); }
#define print(val) { cout << val; }
#define println(val) { cout << val << endl; }
#define next_line { cout << endl; }
#define START_APP int main()
#define RED 12
#define GREEN 10
#define YELLOW 14
#define DEFAULT 7

extern HANDLE hConsole;

#define error_message(message) { \
SetConsoleTextAttribute(hConsole, RED);\
cout << message << endl;\
SetConsoleTextAttribute(hConsole, DEFAULT);}

#define access_message(message) { \
SetConsoleTextAttribute(hConsole, GREEN);\
cout << message << endl;\
SetConsoleTextAttribute(hConsole, DEFAULT);}

#define warning_message(message) { \
SetConsoleTextAttribute(hConsole, YELLOW);\
cout << message << endl;\
SetConsoleTextAttribute(hConsole, DEFAULT);}
