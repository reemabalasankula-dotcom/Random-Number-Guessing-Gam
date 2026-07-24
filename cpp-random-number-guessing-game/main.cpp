#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int guess;
    int targetNumber;
    int attempts;
    char playAgain;

    // Seed random number generator
    srand(time(0));

    do
    {
        // Generate random number between 1 and 100
        targetNumber = rand() % 100 + 1;

        attempts = 0;

        cout << "\n===== RANDOM NUMBER GUESSING GAME =====" << endl;
        cout << "I have selected a number between 1 and 100." << endl;
        cout << "Try to guess it!" << endl;

        do
        {
            cout << "\nEnter your guess: ";
            cin >> guess;

            attempts++;

            if(guess > targetNumber)
            {
                cout << "Too High! Try a smaller number." << endl;
            }
            else if(guess < targetNumber)
            {
                cout << "Too Low! Try a bigger number." << endl;
            }
            else
            {
                cout << "Correct! You guessed the number." << endl;
                cout << "Number of attempts: " << attempts << endl;
            }

        } while(guess != targetNumber);


        // Score calculation
        if(attempts <= 5)
        {
            cout << "Excellent Score!" << endl;
        }
        else if(attempts <= 10)
        {
            cout << "Good Score!" << endl;
        }
        else
        {
            cout << "You can improve your guessing skills!" << endl;
        }


        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;

    } while(playAgain == 'y' || playAgain == 'Y');


    cout << "Thanks for playing!" << endl;

    return 0;
}
