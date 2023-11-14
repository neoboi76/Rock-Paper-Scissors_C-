#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

string pickComputerMove();

int main()
{

    char ans, play;
    int scoreCtr;

    cout << "Rock, Paper Scissors\n\n";

    cout << "Press y and enter to play: ";
    cin >> play;
    play = tolower(play);

    if (play != 'y')
    {
        system("clear");
        exit(1);
    }

    do
    {
        string computerMove = pickComputerMove();
        string playerMove;

        int choice;

        do
        {
            system("clear");

            cout << "*********************" << endl
                 << "[1] Rock" << endl
                 << "[2] Paper" << endl
                 << "[3] Scissors" << endl
                 << "*********************" << endl;
            cin >> choice;

        } while (choice > 3 || choice < 0);

        system("clear");

        switch (choice)
        {

        case 1:
            playerMove = "rock";
            cout << "Computer drew " << computerMove << endl;
            cout << endl;

            if (playerMove == computerMove)
                cout << "It's a tie" << endl;

            else if (playerMove == "rock" && computerMove == "scissors")
            {
                cout << "You win" << endl;
                scoreCtr++;
            }

            else
                cout << "You lost" << endl;
            cout << "Current score: " << scoreCtr << endl;

            break;

        case 2:
            playerMove = "paper";
            cout << "Computer drew " << computerMove << endl;
            cout << endl;

            if (playerMove == computerMove)
                cout << "It's a tie" << endl;

            else if (playerMove == "paper" && computerMove == "rock")
            {
                cout << "You win" << endl;
                scoreCtr++;
            }

            else
                cout << "You lost" << endl;
            cout << "Current score: " << scoreCtr << endl;

            break;

        case 3:
            playerMove = "scissors";
            cout << "Computer drew " << computerMove << endl;
            cout << endl;

            if (playerMove == computerMove)
                cout << "It's a tie" << endl;

            else if (playerMove == "scissors" && computerMove == "paper")
            {
                cout << "You win" << endl;
                scoreCtr++;
            }

            else
                cout << "You lost" << endl;
            cout << "Current score: " << scoreCtr << endl;

            break;
        }

        do
        {
            cout << "\n\nPlay again?[y/n]: ";
            cin >> ans;
            ans = tolower(ans);

        } while (ans != 'y' && ans != 'n');

        system("clear");

    } while (ans == 'y');

    return 0;
}

string pickComputerMove()
{
    srand(time(0));

    string computerMove;

    int randNum = rand() % 3;

    switch (randNum)
    {
    case 0:
        computerMove = "rock";
        break;

    case 1:
        computerMove = "paper";
        break;

    case 2:
        computerMove = "scissors";
        break;
    }

    return computerMove;
}
