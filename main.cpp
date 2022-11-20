#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <windows.h>
#include <ctime>

using namespace std;

void mainMenu();
void guessDieOutput();
void multiplayerGame();
int randomNumGenerator();
void showRandomDie();
void showDieResult(int randNum);
void playAgain();
void oneDotDie();
void twoDotDie();
void threeDotDie();
void fourDotDie();
void fiveDotDie();
void sixDotDie();

int main()
{
    int choice;

    menu:
    mainMenu();

    cout << "\t\t\t\t\t\t\t\t>> Please enter the number of your choice: ";
    cin >> choice;

    if(choice == 1){
        guessDieOutput();
    }
    else if(choice == 2){
        multiplayerGame();
    }
    else if(choice == 0){
        return 0 ;
    }
    else{
        cout << "\t\t\t\t\t\t\t\tI N V A L I D  I N P U T\n";
        system("PAUSE");
        system("CLS");
        goto menu;
    }
}

void mainMenu(){
    cout << "\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t   D I E   G U E S S I N G  G A M E\n";
    cout << "\t\t\t\t\t\t\t\t=========================================\n\n\n\n";

    cout << "\t\t\t\t\t\t\t\t\t[1] - P L A Y  N O W\n\n";
    cout << "\t\t\t\t\t\t\t\t\t[2] - M U L T I P L A Y E R\n\n";
    cout << "\t\t\t\t\t\t\t\t\t[0] - E X I T\n\n\n\n";
}

void guessDieOutput(){
    int guessNum, randNum;

    while(guessNum != randNum){
        system("CLS");
        cout << "\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t>> Enter [0] to quit the game\n";
        cout << "\t\t\t\t\t\t\t\t>> Enter the number for your guess output of the die: ";
        cin >> guessNum;

        if(guessNum == 0){
            return;
        }

        showRandomDie(); // Random die animation.

        randNum = randomNumGenerator();

        showDieResult(randNum);

        cout << "\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t Die Output: " << randNum <<"\n";
        cout << "\t\t\t\t\t\t\t\t Your Guess: " << guessNum <<"\n";

        if(guessNum == randNum){
            cout << "\n\n";
            cout << "\t\t\t\t\t\t\t\tYour guess is correct\n";
        }
        else{
            cout << "\n\n";
            cout << "\t\t\t\t\t\t\t\tYour guess is wrong\n";
        }

        system("PAUSE");
    }

    system("CLS");
    main();
}

void multiplayerGame(){
    int player1, player2, randNum;

    while(player1 != randNum && player2 != randNum){
        start:
        system("CLS");
        cout << "\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\tPlayer1, Enter your guess output for the die: ";
        cin >> player1;

        cout << "\t\t\t\t\t\t\t\t\tPlayer2, Enter your guess output for the die: ";
        cin >> player2;

        if(player1 == player2){
            goto start;
        }

        showRandomDie();

        randNum = randomNumGenerator();

        showDieResult(randNum);

        cout << "\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t Die Output: " << randNum <<"\n";
        cout << "\t\t\t\t\t\t\t\t Player1's Guess: " << player1 <<"\n";
        cout << "\t\t\t\t\t\t\t\t Player2's Guess: " << player2 <<"\n";

        if(player1 == randNum){
            cout << "\n\n";
            cout << "\t\t\t\t\t\t\t\tPlayer1 wins\n";
        }
        else if(player2 == randNum){
            cout << "\n\n";
            cout << "\t\t\t\t\t\t\t\tPlayer2 wins\n";
        }
        else{
            cout << "\n\n";
            cout << "\t\t\t\t\t\t\t\tNo one wins\n";
        }

        system("PAUSE");
    }

    playAgain();
}

void showDieResult(int randNum){
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
    if(randNum == 1){
        oneDotDie();
    }
    else if(randNum == 2){
        twoDotDie();
    }
    else if(randNum == 3){
        threeDotDie();
    }
    else if(randNum == 4){
        fourDotDie();
    }
    else if(randNum == 5){
        fiveDotDie();
    }
    else if(randNum == 6){
        sixDotDie();
    }
}

int randomNumGenerator(){
    int randNumGen;

    srand(time(NULL));
    return randNumGen = 1 + (rand() % 6);
}

void showRandomDie(){
    for(int i = 0; i < 6; i++){
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
        oneDotDie();
        Sleep(100);
        system("CLS");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
        twoDotDie();
        Sleep(100);
        system("CLS");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
        threeDotDie();
        Sleep(100);
        system("CLS");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
        fourDotDie();
        Sleep(100);
        system("CLS");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
        fiveDotDie();
        Sleep(100);
        system("CLS");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
        sixDotDie();
        Sleep(100);
        system("CLS");
    }
}

void playAgain(){
    char playAgain;

    system("CLS");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\tDo you want to play again? [Y/y] or [N/n]? ";
    cin >> playAgain;

    if(playAgain == 'Y' || playAgain == 'y'){
        multiplayerGame();
    }
    else if(playAgain == 'N' || playAgain == 'n'){
        system("CLS");
        main();
    }
}

void oneDotDie(){
    cout << "\t\t\t\t\t\t\t\t\t+-------------+\n";
    cout << "\t\t\t\t\t\t\t\t\t|             |\n";
    cout << "\t\t\t\t\t\t\t\t\t|             |\n";
    cout << "\t\t\t\t\t\t\t\t\t|      O      |\n";
    cout << "\t\t\t\t\t\t\t\t\t|             |\n";
    cout << "\t\t\t\t\t\t\t\t\t|             |\n";
    cout << "\t\t\t\t\t\t\t\t\t+-------------+\n";
}

void twoDotDie(){
    cout << "\t\t\t\t\t\t\t\t\t+-------------+\n";
    cout << "\t\t\t\t\t\t\t\t\t| O           |\n";
    cout << "\t\t\t\t\t\t\t\t\t|             |\n";
    cout << "\t\t\t\t\t\t\t\t\t|             |\n";
    cout << "\t\t\t\t\t\t\t\t\t|             |\n";
    cout << "\t\t\t\t\t\t\t\t\t|             |\n";
    cout << "\t\t\t\t\t\t\t\t\t|           O |\n";
    cout << "\t\t\t\t\t\t\t\t\t+-------------+\n";
}

void threeDotDie(){
    cout << "\t\t\t\t\t\t\t\t\t+-------------+\n";
    cout << "\t\t\t\t\t\t\t\t\t| O           |\n";
    cout << "\t\t\t\t\t\t\t\t\t|             |\n";
    cout << "\t\t\t\t\t\t\t\t\t|      O      |\n";
    cout << "\t\t\t\t\t\t\t\t\t|             |\n";
    cout << "\t\t\t\t\t\t\t\t\t|           O |\n";
    cout << "\t\t\t\t\t\t\t\t\t+-------------+\n";
}

void fourDotDie(){
    cout << "\t\t\t\t\t\t\t\t\t+-------------+\n";
    cout << "\t\t\t\t\t\t\t\t\t| O         O |\n";
    cout << "\t\t\t\t\t\t\t\t\t|             |\n";
    cout << "\t\t\t\t\t\t\t\t\t|             |\n";
    cout << "\t\t\t\t\t\t\t\t\t|             |\n";
    cout << "\t\t\t\t\t\t\t\t\t|             |\n";
    cout << "\t\t\t\t\t\t\t\t\t|             |\n";
    cout << "\t\t\t\t\t\t\t\t\t| O         O |\n";
    cout << "\t\t\t\t\t\t\t\t\t+-------------+\n";
}

void fiveDotDie(){
    cout << "\t\t\t\t\t\t\t\t\t+-------------+\n";
    cout << "\t\t\t\t\t\t\t\t\t|             |\n";
    cout << "\t\t\t\t\t\t\t\t\t| O         O |\n";
    cout << "\t\t\t\t\t\t\t\t\t|             |\n";
    cout << "\t\t\t\t\t\t\t\t\t|      O      |\n";
    cout << "\t\t\t\t\t\t\t\t\t|             |\n";
    cout << "\t\t\t\t\t\t\t\t\t| O         O |\n";
    cout << "\t\t\t\t\t\t\t\t\t|             |\n";
    cout << "\t\t\t\t\t\t\t\t\t+-------------+\n";
}

void sixDotDie(){
    cout << "\t\t\t\t\t\t\t\t\t+-------------+\n";
    cout << "\t\t\t\t\t\t\t\t\t|    O   O    |\n";
    cout << "\t\t\t\t\t\t\t\t\t|    O   O    |\n";
    cout << "\t\t\t\t\t\t\t\t\t|    O   O    |\n";
    cout << "\t\t\t\t\t\t\t\t\t|    O   O    |\n";
    cout << "\t\t\t\t\t\t\t\t\t|    O   O    |\n";
    cout << "\t\t\t\t\t\t\t\t\t|    O   O    |\n";
    cout << "\t\t\t\t\t\t\t\t\t+-------------+\n";
}
