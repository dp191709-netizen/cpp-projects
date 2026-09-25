// #include <iostream>
// #include <string>
// using namespace std;

// void drawHangman(int life)
// {
//     cout << "\n";

//     // 1 wrong guess
//     if (life <= 4)
//     {
//         cout << "  _______\n";
//         cout << "  |\n";
//         cout << "  |\n";
//         cout << "  |\n";
//         cout << "__|________\n";
//     }

//     // 2 wrong guesses
//     if (life <= 3)
//     {
//         cout << "  _______\n";
//         cout << "  |     |\n";
//         cout << "  |     O\n";
//         cout << "  |\n";
//         cout << "  |\n";
//         cout << "__|________\n";
//     }

//     // 3 wrong guesses
//     if (life <= 2)
//     {
//         cout << "  _______\n";
//         cout << "  |     |\n";
//         cout << "  |     O\n";
//         cout << "  |     |\n";
//         cout << "  |\n";
//         cout << "__|________\n";
//     }

//     // 4 wrong guesses
//     if (life <= 1)
//     {
//         cout << "  _______\n";
//         cout << "  |     |\n";
//         cout << "  |     O\n";
//         cout << "  |    /|\\\n";
//         cout << "  |\n";
//         cout << "__|________\n";
//     }

//     // 5 wrong guesses
//     if (life <= 0)
//     {
//         cout << "  _______\n";
//         cout << "  |     |\n";
//         cout << "  |     O\n";
//         cout << "  |    /|\\\n";
//         cout << "  |    / \\\n";
//         cout << "  |\n";
//         cout << "__|________\n";
//     }
// }

// int main()
// {
//     string word;
//     cout << "Enter the word: ";
//     cin >> word;
//     system("cls");
//     string display;
//     for (int i = 0; i < word.length(); i++)
//     {
//         display += '_';
//     }

//     int life = 5;

//     while (life > 0 && display != word)
//     {
//         cout << "\nWord: ";

//         for (int i = 0; i < display.length(); i++)
//         {
//             cout << display[i] << " ";
//         }

//         cout << "\nLives left: " << life;

//         char guess;
//         cout << "\nEnter your guess: ";
//         cin >> guess;

//         bool found = false;

//         // Check the whole word
//         for (int i = 0; i < word.length(); i++)
//         {
//             if (word[i] == guess)
//             {
//                 display[i] = guess;
//                 found = true;
//             }
//         }

//         if (found == false)
//         {
//             life--;
//             cout << "\nWrong guess!";
//             drawHangman(life);
//         }
//         else
//         {
//             cout << "\nGood guess!";
//         }
//     }

//     if (display == word)
//     {
//         cout << "\n\nYou WON! 🎉\n";
//         cout << "The word was: " << word << endl;
//     }
//     else
//     {
//         cout << "\n\nGame Over!\n";
//         cout << "The word was: " << word << endl;
//     }

//     return 0;
// }