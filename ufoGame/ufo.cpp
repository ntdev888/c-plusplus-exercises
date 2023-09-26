#include <iostream>
#include <vector>
#include "ufo_functions.hpp"

int main()
{
    std::string codeword = "codecademy";
    std::string answer = "__________";
    int misses = 0;
    std::vector<char> incorrect = {};
    bool guess = false;
    char usr_guess = 'A';

    greet();

    while (answer != codeword && misses < 7)
    {
        std::cout << "Guess a Letter: ";
        std::cin >> usr_guess;

        // check guess against answer
        for (int i = 0; i < codeword.size(); i++)
        {
            if (usr_guess == codeword[i])
            {
                guess = true;
                answer[i] = usr_guess;
            }
        }

        // add character to incorrect
        guess == false ? incorrect.push_back(usr_guess) : void(0);

        display_misses(misses);

        // UI
        std::cout << "Answer: " << answer << "\n";

        std::cout << "Incorrect Guesses: ";
        for (int i = 0; i < incorrect.size(); i++)
        {
            std::cout << " " << incorrect[i];
        }

        std::cout << "\n";

        // endgame win condition
        if (codeword == answer)
        {
            endGame(codeword, answer);
            return 0;
        }
        else if (guess == true)
            //continue loop at no cost to player
            guess = false;
        else
        {
            //increment attempts and start while loop again
            guess = false;
            misses++;
        }
    }

    // endgame loose condition
    endGame(codeword, answer);
}
