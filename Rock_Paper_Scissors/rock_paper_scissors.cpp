#include <iostream>

int main() {
  using namespace std;
  srand(time(NULL));
  int computer = rand() % 3 + 1;
  int usr = 0;

  string comp_choice = "_";

  if(computer == 1){
    comp_choice = "✊\n";
  } else if(computer == 2){
    comp_choice = "✋\n";
  } else if(computer == 3){
    comp_choice = "✌️\n";
  } else {
    comp_choice = "Outside Selection Range\n";
  }

  cout << "++++++++++++++++++++++++++\n";
  cout << "   rock paper scissors!\n";
  cout << "++++++++++++++++++++++++++\n";

  cout << "1) ✊\n";
  cout << "2) ✋\n";
  cout << "3) ✌️\n";

  cout << "Shoot! ";

  cin >> usr;

  cout << "Computer Chose " << computer << " " << comp_choice << "\n\n";
  
  switch(usr){

  case 1:
  if(computer == 1){
    cout << "Tie\n";
    break;
  } else if(computer == 2){
    cout << "Computer beats Player\n";
    break;
  } else if(computer == 3){
    cout << "Player beats computer\n";
    break;
  } else {
    cout << "Something went wrong?\n";
    break;
  }

  case 2:
    if(computer == 1){
    cout << "Player beats Computer\n";
    break;
  } else if(computer == 2){
    cout << "tie\n";
    break;
  } else if(computer == 3){
    cout << "Computer beats Player\n";
    break;
  } else {
    cout << "Something went wrong?\n";
    break;
  }

  case 3:
    if(computer == 1){
    cout << "Computer beats Player\n";
    break;
  } else if(computer == 2){
    cout << "Player beats computer\n";
    break;
  } else if(computer == 3){
    cout << "Tie";
  } else {
    cout << "Something went wrong?\n";
    break;
  }

  default:
  cout << "Hmmm, input was outside option range\n Try again\n";
  break;
  }

}