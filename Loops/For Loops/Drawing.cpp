#include<iostream>
#include<iomanip>

using namespace std;

int main(){
  int height, width;
  cout << "Height: \n";
  cin >> height;
  cout << "Width: \n";
  cin >> width;
  char symbol;
  cout << "Symbol: \n";
  cin >> symbol;

  for(int h=0;h<height;h++){
    for(int w=0;w<width;w++){
      cout << setw(3) << symbol;
    }
    cout << endl;
  }
  
}