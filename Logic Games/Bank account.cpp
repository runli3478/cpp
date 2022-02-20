#include <iostream>

int main() {
  
  int pin = 0;
  int tries = 0;
  
  std::cout << "WELCOME TO NATIONAL BANK OF MALAYSIA\n";
  
  std::cout << "Enter your PIN: ";
  std::cin >> pin;
  
  while (pin != 990823) {
    
    std::cout << "Wrong PIN!\nTry again: ";
    std::cin >> pin;
    tries++;
    
  }
  
  std::cout << "PIN correct!\n";
  std::cout << "You can now access to your account.\n"; 
   
  return 0;
  
}