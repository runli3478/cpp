#include <iostream>

int main() {

  int answer = 10;
  
  int guess;

  std::cout << "I have a number 1-10.\n";
  std::cout << "What is it?\nEnter your answer: ";
  std::cin >> guess;
 
  // Write a while loop here:

  while (guess != 10) {

    std::cout << "Wrong guess, try again: ";
    std::cin >> guess;

  }
  
  std::cout << "Well done! You got it!\n";

  return 0;
  
}