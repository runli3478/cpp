#include <iostream>

using namespace std;
string name;
double weight, height, bmi;

int main(){
  cout << "Please enter your name: \n";
  getline(cin, name);
    
  cout << "====================\n";
  cout << "|| Hello " << name << "!||\n";
  cout << "====================\n";
  
  cout << "Please enter your weight: \n";
  cin >> weight;

  cout << "Please enter your height: \n";
  cin >> height;

  bmi = weight/(height*height);
  
  cout << "Your BMI is " << bmi << "!\n";
}