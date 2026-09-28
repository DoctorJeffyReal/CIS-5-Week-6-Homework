#include <iostream>
#include <string>

// Homework 6 — Jesus
// CIS 5 Week 06 · Menu

int main() {
  int choice;

  do {
    std::cout << "Menu:\n";
    std::cout << "1. Say hello\n";
    std::cout << "2. Count down\n";
    std::cout << "3. Exit\n";
    std::cout << "Please select an option: ";
    std::cin >> choice;

    switch (choice) {
      case 1: {
        std::string name;
        std::cout << "Enter your name: ";
        std::cin >> name;
        std::cout << "Hello " << name << "\n";
        break;
      }
      case 2: {
        int number;
        std::cout << "Enter a number to count down from: ";
        std::cin >> number;
        for (int count = number; count >= 1; --count) {
          std::cout << count << "\n";
        }
        break;
      }
      case 3:
        break;
      default:
        std::cout << "Invalid option. Please choose 1, 2, or 3.\n";
        break;
    }
  } while (choice != 3);

  std::cout << "The Menu is closed\n";
  return 0;
}
