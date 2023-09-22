#include <iostream>
#include <cstdlib>
#include <string>

int main() {
  // Your Future is here
  srand(time(NULL));
  int answer = std::rand() % 10;
  std::string user_input;

  std::cout << "MAGIC 8-BALL\n";
  std::cout << "************\n";
  std::cout << "Ask me a question Human:\n";
  std::cin >> user_input;

  if(answer == 0) {
    std::cout << "It is certain";
    return 0;
  } else if(answer == 10) {
    std::cout << "Very doubtful";
    return 0;
  } else if(answer == 9) {
    std::cout << "Without a doubt.";
    return 0;
  } else if(answer == 8) {
    std::cout << "Yes - definitely.";
    return 0;
  } else if(answer == 7) {
    std::cout << "You may rely on it.";
    return 0;
  } else if(answer == 6) {
    std::cout << "As I see it, yes.";
    return 0;
  } else if(answer == 5) {
    std::cout << "Most likely.";
    return 0;
  } else if(answer == 4) {
    std::cout << "Outlook good.";
    return 0;
  } else if(answer == 3) {
    std::cout << "Yes.";
    return 0;
  } else if(answer == 2) {
    std::cout << "Signs point to yes.";
    return 0;
  } else if(answer == 1) {
    std::cout << "Reply hazy, try again.";
    return 0;
  } else {
    std::cout << "Are you speaking english?";
    return 0;
  }


}