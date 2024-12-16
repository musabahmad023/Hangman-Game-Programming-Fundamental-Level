/*
 * This code is authored by Musab Ahmad.

 * Feel free to use this code for your projects, modify it for creativity,
 * or adapt it to meet your specific requirements.

 * If you have any queries, suggestions, or feedback,
 * feel free to reach out to me via email at:
 *    masabahmed786@gmail.com

 * I would appreciate it if you could give credit when using this code
 * in your projects or repositories. 🌟

 * Don't forget to star ⭐ this repository and follow me on GitHub
 * to stay updated with more exciting projects and content!

 * Thank you for your support and interest in my work!
 */

#include <iostream>
using namespace std;

int main()
{
    cout << "        *************************   " << endl;
    cout << "        |      Welcome To       |   " << endl;
    cout << "        |        HANGMAN        |   " << endl;
    cout << "        |   Word Search Game    |   " << endl;
    cout << "        *************************   " << endl;

    cout << "            START MENU        " << endl
         << endl;
    ;
    char name[100]; // using character array for name
    cout << "Please enter your NAME  =  " << endl;
    cin.getline(name, 100); // take the name from user
    char email[100];        // using character array for email
    cout << "please enter your email" << endl;
    cin.getline(email, 100); // take the email from user
    system("CLS");
    cout << "  HI  " << name << "    of Email   " << email << "     Let's START the Game   " << endl;
    cout << "Select a mode of your choice" << endl;
    int a;
    int victory = 0; // putting 0 in the this variable so that no there is no garbage value
    int defeat = 0;  // putting 0 in the this variable so that no there is no garbage value
    char char1 = 'y';
    while (char1 == 'Y' || char1 == 'y')
    {

        cout << "Press (1) for EASY";
        cout << endl;
        cout << "Press (2) for MEDIUM";
        cout << endl;
        cout << "Press (3) for HARD";
        cout << endl;
        cin >> a;
        while (a < 1 || a > 3)
        { // using loop to take input again in case of invalid entry
            cout << "invalid input\n enter valid entry between 1 and 3\n";
            cin >> a;
        }
        system("CLS"); // for clear the screen
        switch (a)
        { // using switch to control variable a
        case 1:
        {

            char easy1;
            char win = 0; // putting 0 in the this variable so that no there is no garbage value
            char loss = 4;
            cout << "you selected the EASY level mode" << endl;
            cout << "you will have 4 attempts to answer correctly" << endl;
            char arr1[100] = "m*gn*ti*";
            cout << endl;
            cout << arr1;
            bool astar = false, cstar = false, estar = false;
            for (int i = 0; i < loss; i += 0)
            { // using loop that controls the wrong attempts
                cout << "" << endl;
                cout << "Enter missing letters in this word  " << endl;
                cin >> easy1;

                if (easy1 == 'a' && astar == true || easy1 == 'c' && cstar == true || easy1 == 'e' && estar == true)
                {
                    cout << "You attempted the wrong guess" << endl;
                    cout << "Remaining attempts are =    " << loss - 1 << endl;
                    cout << arr1;
                    loss--; // when wrong letter is guessed,1 decrement in loss
                    if (loss == 0)
                    {
                        cout << "\nDAMN!!!! You lost the game\n\n\n"
                             << endl;
                        defeat++; // if loss the easy round,increment in defeat
                    }
                    continue;
                }
                switch (easy1)
                {
                case 'a':

                    astar = true;
                    win++; // when correct letter is guessed,1 increment in win.
                    cout << "WOW you guessed the correct letter" << endl;
                    arr1[1] = 'a';
                    cout << arr1;

                    break;
                case 'e':
                    win++; // when correct letter is guessed,1 increment in win.
                    cout << "WOW you guessed the correct letter" << endl;
                    arr1[4] = 'e';
                    cout << arr1;
                    estar = true;
                    break;
                case 'c':
                    win++; // when correct letter is guessed,1 increment in win.
                    cout << "WOW you guessed the correct letter" << endl;
                    arr1[7] = 'c';
                    cout << arr1;
                    cstar = true;
                    break;
                default:
                    cout << "You attempted the wrong guess" << endl;
                    cout << "Remaining attempts are =    " << loss - 1 << endl;
                    cout << arr1;
                    loss--; // when wrong letter is guessed,1 decrement in loss
                    break;
                }

                if (win == 3)
                { // if win becomes 3,print this message
                    cout << "\nCongratulations!!!! YOU WON\n\n\n"
                         << endl;
                    victory++; // if win the easy round, 1 increment in victory
                    break;
                }
                else if (loss == 0)
                {
                    cout << "\nDAMN!!!! You lost the game\n\n\n"
                         << endl;
                    defeat++; // if loss the easy round,increment in defeat
                    break;
                }
            }
            break;
        }

        case 2:
        {
            char medium1;
            char win = 0; // putting 0 in the this variable so that no there is no garbage value
            char loss = 3;
            cout << "you selected the MEDIUM level mode" << endl;
            cout << "you will have 3 attempts to answer correctly" << endl;
            char arr2[100] = "*yl*p*o*e";
            cout << endl;
            cout << arr2;
            for (int i = 0; i < loss; i += 0)
            { // using loop that controls the wrong attempts
                cout << "" << endl;
                cout << "Enter missing letters in this word  " << endl;
                cin >> medium1;

                switch (medium1)
                {
                case 'x':
                    win++; // when correct letter is guessed,1 increment in win.
                    cout << "WOW you guessed the correct letter" << endl;
                    arr2[0] = 'x';
                    cout << arr2;
                    break;
                case 'h':
                    win++; // when correct letter is guessed,1 increment in win.
                    cout << "WOW you guessed the correct letter" << endl;
                    arr2[5] = 'h';
                    cout << arr2;
                    break;
                case 'o':
                    win++; // when correct letter is guessed,1 increment in win.
                    cout << "WOW you guessed the correct letter" << endl;
                    arr2[3] = 'o';
                    cout << arr2;
                    break;
                case 'n':
                    win++; // when correct letter is guessed,1 increment in win.
                    cout << "WOW you guessed the correct letter" << endl;
                    arr2[7] = 'n';
                    cout << arr2;
                    break;
                default:
                    cout << "You attempted the wrong guess" << endl;
                    cout << "Remaining attempts are =    " << loss - 1 << endl;
                    cout << arr2;
                    loss--; // when wrong letter is guessed,1 decrement in loss
                    break;
                }

                if (win == 4)
                {
                    cout << "\nCongratulations!!!! YOU WON\n\n\n"
                         << endl;
                    victory++; // if win the easy round, 1 increment in victory
                    break;
                }
                else if (loss == 0)
                {
                    cout << "\nDAMN!!!! You lost the game\n\n\n"
                         << endl;
                    defeat++; // if loss the easy round,increment in defeat
                    break;
                }
            }
            break;
        }

        case 3:
        {
            char hard1;
            char win = 0;
            char loss = 2;
            cout << "you selected the HARD level mode" << endl;
            cout << "you will have 2 attempts to answer correctly" << endl;
            char arr3[100] = "**b*la*ti*y";
            cout << endl;
            cout << arr3;
            for (int i = 0; i < loss; i += 0)
            { // using loop that controls the wrong attempts
                cout << "" << endl;
                cout << "Enter missing letters in this word  " << endl;
                cin >> hard1;

                switch (hard1)
                {
                case 'j':
                    win++; // when correct letter is guessed,1 increment in win.
                    cout << "WOW you guessed the correct letter" << endl;
                    arr3[0] = 'j';
                    cout << arr3;
                    break;
                case 'u':
                    win++; // when correct letter is guessed,1 increment in win.
                    cout << "WOW you guessed the correct letter" << endl;
                    arr3[1] = 'u';
                    cout << arr3;
                    break;
                case 'i':
                    win++; // when correct letter is guessed,1 increment in win.
                    cout << "WOW you guessed the correct letter" << endl;
                    arr3[3] = 'i';
                    cout << arr3;
                    break;
                case 'n':
                    win++; // when correct letter is guessed,1 increment in win.
                    cout << "WOW you guessed the correct letter" << endl;
                    arr3[6] = 'n';
                    cout << arr3;
                    break;
                case 'l':
                    win++; // when correct letter is guessed, increment in win.
                    cout << "WOW you guessed the correct letter" << endl;
                    arr3[9] = 'l';
                    cout << arr3;
                    break;
                default:
                    cout << "You attempted the wrong guess" << endl;
                    cout << "Remaining attempts are =    " << loss - 1 << endl;
                    cout << arr3;
                    loss--; // when wrong letter is guessed,1 decrement in loss
                    break;
                }

                if (win == 5)
                {
                    cout << "\nCongratulations!!!! YOU WON\n\n\n"
                         << endl;
                    victory++; // if win the easy round, 1 increment in victory
                    break;
                }
                else if (loss == 0)
                {
                    cout << "\nDAMN!!!! You lost the game\n\n\n"
                         << endl;
                    defeat++; // if loss the easy round,increment in defeat
                    break;
                }
            }
            break;
        }
        }

        cout << "Total Lost Games :: " << defeat << endl; // total games lost
        cout << "Total Won Games :: " << victory << endl; // total games won
        cout << "YOU WANT TO PLAY GAME (Y\\N)";
        cin >> char1; // user input for play again or not
        system("CLS");
        if (char1 == 'n' || char1 == 'N')
        {
            cout << "As you won  " << victory << " games so you earn " << victory * 10 << " points  " << endl; // points for win games
            cout << "Thanks For PLAYING!!!!" << endl;
        }
    }

    return 0;
}