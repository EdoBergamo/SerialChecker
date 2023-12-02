#include "console_functions.h"

void setColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

void setConsoleTitle(const std::string& title) {
    SetConsoleTitleA(title.c_str());
}

void executeCommand(const std::string& command, std::stringstream& output) {
    FILE* pipe = _popen(command.c_str(), "r");
    if (pipe) {
        char buffer[128];
        while (fgets(buffer, sizeof(buffer), pipe) != nullptr) {
            output << buffer;
        }
        _pclose(pipe);
    }
}

void displaySectionTitle(const std::string& title, bool found) {
    const int width = 50;
    const char lineChar = '-';
    std::string sectionLine(width, lineChar);
    std::string centeredTitle = " " + title + " ";
    const int titlePadding = (width - centeredTitle.length()) / 2;

    std::cout << sectionLine << "\n";

    if (found)
        setColor(FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    else
        setColor(FOREGROUND_RED | FOREGROUND_INTENSITY);

    std::cout << "| " << std::string(titlePadding, ' ') << centeredTitle << std::string(titlePadding, ' ') << "|\n";

    setColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << sectionLine << "\n";
}
