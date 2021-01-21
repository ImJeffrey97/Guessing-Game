/* 
Jeffrey Markham
Title: Guessing Game 6 Redo
Due Date: 10/22/2020
Description: a user sets their own range of numbers to guess from 
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    
    int randgen;          //variable for random number
    int guess = -1;       //variable for user's guess
    int low;              //variable for low range value
    int high;             //variable for high range value
    double score = 5;     //variable for user's score
    int totalScore = 0;   //variable for total score
    double avg = 0;       //variable for average 
    int playedGames = 0;  //variable for total games played
    char play = 'y';      //variable for character to play guessing game

    //cout << "Welcome to the Guessing Game!" << endl;
    //cout << "Do you want to play a game (y/n)?";
    //cin >> play;
    //play = tolower (play);

    cout << "Pick a range from any positive real number to any positive real number" << endl;
    do
    {
        cout << "Enter Low range: " << endl;
        cin >> low;
        cout << "Enter High range: " << endl;
        cin >> high; 

    } while (low > high);

    while (play == 'y')
    {
        randgen = rand()%(high-low+1)+low;
        guess = -1;
        //cout << "Computer number is: " << randgen << endl;

        while (guess != randgen)
        {
            cout << "Enter a guess between " << low << " and " << high << endl;
            cin >> guess;
            cout << "Your guess: " << guess << endl;

            if (guess > randgen)
            {
                cout << "Too Big" << endl;
                score--;
            }
            else if (guess < randgen)
            {
                cout << "Too Small" << endl;
                score--;
            }
            if (score < 0)
            {
                score = 0;
            }
            else
            {
                ;
            }
        }

        cout << "Score so far: " << score << endl;
        totalScore = totalScore + score;
        playedGames++;
        score = 5;
        cout << "Do you want to play again (y/n)? " << endl;
        cin >> play;

    }

    avg = (double) totalScore /playedGames;
    cout << "Total points earned: " << totalScore << endl;
    cout << "Games played so far: " << playedGames << endl;
    cout << "Average score is: " << avg << endl;
    
    srand (time (0));
    cout << endl;
    system ("pause");
    return 0;
}
//problems: none 