#include "./includes/Bureaucrat.hpp"

int main() {
  {
    std::cout << "base test" << std::endl;
    try {
      Bureaucrat b1("John", 50);
      Bureaucrat b2("Doe", 150);
      Bureaucrat b3("Alice", 0);
    } catch (std::exception &e) {
      std::cerr << e.what() << std::endl;
    }
  }

  {
    std::cout << "\ntest with a grade too low" << std::endl;
    try {
      Bureaucrat b4("Bob", 151);
    } catch (std::exception &e) {
      std::cerr << e.what() << std::endl;
    }
  }

  {
    std::cout << "\ntest with a grade too high" << std::endl;
    try {
      Bureaucrat b4("Bob", -1);
    } 
    catch (std::exception &e) {
      std::cerr << e.what() << std::endl;
    }
  }

  {
    std::cout << "\npromote under 1" << std::endl;
    try {
      Bureaucrat b5("Charlie", 1);
      b5.promote();
    } catch (std::exception &e) {
      std::cerr << e.what() << std::endl;
    }
  }

  {
    std::cout << "\ndemote over 150" << std::endl;
    try {
      Bureaucrat b6("Charlie", 150);
      b6.demote();
    } catch (std::exception &e) {
      std::cerr << e.what() << std::endl;
    }
  }
  return 0;
}
