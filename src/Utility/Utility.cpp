#include "../../include/Utility/Utility.hpp"
#include <iostream>
#include <limits>
using namespace std;

namespace N_Utility{

    void Utility::ClearConsole() {
        // #ifdef _WIN32
        //     system("cls");
        // #else
        //     (void)system("clear");
        // #endif

        std::cout << "\033[2J\033[1;1H"; // ANSI escape codes to clear the console
        std::cout.flush(); // Ensure all output is flushed before clearing
    }

    void Utility :: WaitForEnter() {
        cin.get();
    }

    void Utility :: ClearInputBuffer() {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

}