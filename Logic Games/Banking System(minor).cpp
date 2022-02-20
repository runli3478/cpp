#include<iostream>
#include<iomanip>

using namespace std;
int option;
int tries = 0;
string name;

void logIn(){
  double accNum; 
  int passW = 123456;
  cout << "Enter your name: ";
  getline(cin, name);
  cout << "\nYour account number: ";
  cin >> accNum;
  cout << "\nEnter your password: ";
  cin >> passW;
  while(passW != 123456){
    cout << "Wrong password!\nPlease re-enter your password again: \n";
    cin >> passW;
    tries++;
    }
}

void showMenu(){
  cout << "**********Menu**********\n";
  cout << "1. Check Balance\n";
  cout << "2. Deposit Money\n";
  cout << "3. Withdraw Money\n";
  cout << "4. Exit\n";
  cout << "************************\n";
}
void _contents(){
  double balance;
  cout << "Option: ";
  cin >> option;
  system("cls");
  switch(option){
    case 1:
      cout << "Balance is $ " << balance << "\n";
    break;
    case 2:
      cout << "Deposit amount: ";
      double depositAmount;
      cin >> depositAmount;
      balance += depositAmount;
    break;
    case 3:
      double withdrawAmount;
      cout << "Withdraw amount: ";
      cin >> withdrawAmount;
    if(withdrawAmount <= balance)
      balance -= withdrawAmount;
      
    else
        cout << "Not enough mone to be withdrawn!\n";
    case 4:
    break;
    }
}
int main()
{
  //check balance, deposit money, withdraw money, show menu
do{
  logIn();
  showMenu();
  _contents();
    
  }
  while(option != 4);

  system("pause>0");
}