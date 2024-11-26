#ifndef COLORS_H
#define COLORS_H

#include <iostream>
#include <string>

// Define ANSI color codes for dark colors
#define RESET      "\033[0m"
#define DARK_GRAY  "\033[90m"    // Dark gray for terminal elements
#define RED        "\033[31m"    // Red for errors
#define GREEN      "\033[32m"    // Green for input
#define BLUE       "\033[34m"    // Blue for output

// Custom functions for colored input, output, and error messages
void coloredInputPrompt(const std::string& prompt) {
    std::cout << GREEN << prompt << RESET;
}

void coloredOutput(const std::string& output) {
    std::cout << BLUE << output << RESET << std::endl;
}

void coloredError(const std::string& error) {
    std::cerr << RED << error << RESET << std::endl;
}

// Function to display terminal elements in dark gray
void darkColorTerminalElements(const std::string& element) {
    std::cout << DARK_GRAY << element << RESET;
}

#endif // COLORS_H
