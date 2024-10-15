#include "Utility.hpp"
#include <iostream>
#include <limits>
using namespace std;

void Utility::ClearConsole() {
#ifdef _WIN32
    system("cls");
#else
    (void)system("clear");
#endif
}

void Utility :: WaitForEnter() {
    cin.get();
}

void Utility :: ClearInputBuffer() {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}