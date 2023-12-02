#pragma once

#include <Windows.h>
#include <iostream>
#include <sstream>

void setColor(int color);
void setConsoleTitle(const std::string& title);
void executeCommand(const std::string& command, std::stringstream& output);
void displaySectionTitle(const std::string& title, bool found);
