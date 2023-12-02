# Serials Checker

This C++ program is designed to retrieve various system-related serial numbers and information by executing Windows Management Instrumentation Command-line (WMIC) queries. It provides an overview of hardware components and device serial numbers of the system where it's executed.

## Features

- **Display System Information**: Extracts serial numbers and related details of various system components using WMIC commands.
- **Section-wise Display**: Organizes information into sections for easy comprehension.
- **Colored Output**: Uses ANSI escape codes to highlight section titles in green if data is found, and in red if no data is retrieved.
- **User Interaction**: Pauses execution at the end, waiting for user input to exit the program.

## Dependencies

- **Windows.h**: Provides access to several functions and declarations necessary for handling the Windows operating system.
- **iostream**: Standard input/output stream library for C++.
- **sstream**: String stream processing library for C++.

## Note

- **Caution**: This program runs specific WMIC commands to access system information. Ensure proper permissions and authority to run these commands.

## Executable Download

You can download the executable file for this program from the [SerialChecker release](https://github.com/EdoBergamo/SerialChecker/releases) on GitHub.

For any issues, suggestions, or contributions, feel free to contact the developer or make modifications as necessary.
