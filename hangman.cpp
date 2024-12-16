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
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    cout << "     --------------------------"
         << "\n    |                          |"
         << "\n    |       WELCOME TO THE     |"
         << "\n    |     WORD SEARCH GAME     |"
         << "\n    |                          |"
         << "\n     --------------------------" << endl;
    char exit;
    int win = 0, lost = 0;
    do
    {
        const int max_words = 3;
        const int max_len = 11;
        int w = 3, r = 0;
        int easy, medium, hard, remove, removing[3];
        char arr1[max_words][max_len] = {"helicopter", "freelancer", "definitely"}, arr[max_len];
        char arr2[max_words][max_len] = {"mysterious", "jubilantly", "juxtaposed"};
        char arr3[max_words][max_len] = {"quizzical", "xylophone", "cacophony"};
    jump:
        cout << "\n            START MENU  "
             << "\n        :: Select a mode :: ";
        int choice;
        cout << "\n1 - Easy "
             << "\n2 - Medium "
             << "\n3 - Difficult "
             << "\nEnter Your Choice :: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            srand(time(0));
            easy = rand() % 3 + 1;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < max_len; j++)
                {
                    arr[j] = arr1[easy - 1][j];
                }
                remove = rand() % (max_len - 1) + 1;
                removing[i] = (remove - 1);
            }
            for (int i = 0; i < 3; i++)
            {
                int j = removing[i];
                arr[j] = '*';
            }
            cout << "Word :: " << arr << endl;
            char choice1;
            bool right;
            cout << "\nGuess the correct word ::";
            cout << "\nEnter missing letters one by one " << endl;
            do
            {
                cout << "You have " << w << " attempts to answer correctly" << endl;

                cout << "Enter a character :: " << endl;
                cin >> choice1;
                right = false;
                for (int i = 0; i < 3; i++)
                {
                    int j = removing[i];
                    if (choice1 == arr1[easy - 1][j])
                    {
                        arr[j] = choice1;
                        cout << "WOW! You guessed correct letter" << endl;
                        r++;
                        right = true;
                    }
                }
                if (!right)
                {
                    w--;
                    cout << "Noooo! You guessed wrong letter" << endl;
                }
                cout << "Word is: " << arr << endl;

            } while (r < 3 && w > 0);
            cout << "\nOriginal Word is :: " << arr1[easy - 1] << endl;

            break;
        case 2:
            srand(time(0));
            medium = rand() % 3 + 1;

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < max_len; j++)
                {
                    arr[j] = arr2[medium - 1][j];
                }
                remove = rand() % (max_len - 1) + 1;
                removing[i] = (remove - 1);
            }

            for (int i = 0; i < 3; i++)
            {
                int j = removing[i];
                arr[j] = '*';
            }
            cout << "Word :: " << arr << endl;
            char choice2;
            bool right2;
            cout << "\nGuess the correct word ::";
            cout << "\nEnter missing letters one by one " << endl;
            do
            {
                cout << "You have " << w << " attempts to answer correctly" << endl;
                cout << "Enter a character :: " << endl;
                cin >> choice2;
                right2 = false;
                for (int i = 0; i < 3; i++)
                {
                    int j = removing[i];
                    if (choice2 == arr2[medium - 1][j])
                    {
                        arr[j] = choice2;
                        cout << "WOW! You guessed correct letter" << endl;
                        r++;
                        right2 = true;
                    }
                }
                if (!right2)
                {
                    cout << "Noooo! You guessed wrong letter" << endl;
                    w--;
                }
                cout << "Word is :: " << arr << endl;

            } while (r < 3 && w > 0);
            cout << "\nOriginal Word is :: " << arr2[medium - 1] << endl;

            break;
        case 3:
            srand(time(0));
            hard = rand() % 3 + 1;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < max_len; j++)
                {
                    arr[j] = arr3[hard - 1][j];
                }
                remove = rand() % (max_len - 1) + 1;
                removing[i] = (remove - 1);
            }
            for (int i = 0; i < 3; i++)
            {
                int j = removing[i];
                arr[j] = '*';
            }
            cout << "Word :: " << arr << endl;
            char choice3;
            bool right3;
            cout << "\nGuess the correct word ::";
            cout << "\nEnter missing letters one by one " << endl;
            do
            {
                cout << "You have " << w << " attempts to answer correctly" << endl;
                cout << "Enter a character :: " << endl;
                cin >> choice3;
                right3 = false;
                for (int i = 0; i < 3; i++)
                {
                    int j = removing[i];
                    // cout << "arr2: " << arr2[hard-1][j] << endl;
                    if (choice3 == arr3[hard - 1][j])
                    {
                        arr[j] = choice3;
                        cout << "WOW! You guessed correct letter" << endl;
                        r++;
                        right3 = true;
                    }
                }
                if (!right3)
                {
                    w--;
                    cout << "Noooo! You guessed wrong letter" << endl;
                }+
                cout << "Word is: " << arr << endl;

            } while (r < 3 && w > 0);
            cout << "\nOriginal Word is :: " << arr3[hard - 1] << endl;

            break;
        default:
            cout << "Please! Enter a valid input :)" << endl;
            goto jump;
        }
        int o = 0;
        bool starfound = false;
        while (arr[o] != '\0')
        {
            if (arr[o] == '*')
            {
                starfound = true;
                break;
            }
            o++;
        }
        if (starfound)
        {
            cout << "\nOh No! You Lost :( " << endl;
            lost++;
        }
        if (!starfound)
        {
            cout << "\nWOW! You Win :) " << endl;
            win++;
        }
        cout << "Total Lost Games :: " << lost << endl;
        cout << "Total Won Games :: " << win << endl;

        cout << "\nDo you Want to Play Again (y/n) :: ";
        cin >> exit;
    } while (exit != 'N' && exit != 'n');

    cout << "\n\nGood Bye! Exiting the game"
         << "\nThanks For Playing :)" << endl;

    return 0;
}
