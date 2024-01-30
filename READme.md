Introduction 

This is a simple guessing game implemented in C++. The game generates a random number between 1 and 10, and the player needs to guess the number within a limited number of attempts.

How to Play

Run the program.

The program will generate a random number between 1 and 10.

You have a total of 5 attempts to guess the number correctly.

Enter your guess when prompted.

After each guess, the program will inform you if your guess is too high or too low.

If you guess the number correctly, your score will increase by 10 points.

If you run out of attempts, the game ends.

You can choose to play again or exit the game.

Code Explanation

The program uses #include directives to include necessary libraries for input/output, random number generation, and other standard functions.
The main() function is where the program execution starts.

The program initializes variables such as num (user's guess), attempts (number of attempts allowed), random_num (the randomly generated number), and score (user's score).

The program generates a random number using the srand() and rand() functions from the <cstdlib> and <ctime> libraries, respectively.

The main game logic is implemented using a do-while loop.
Inside the loop, the user is prompted to enter their guess.

The program compares the user's guess with the random number and provides feedback.

The user's score is updated based on the correctness of their guess.
After each game, the user is asked if they want to play again.
The loop continues until the user decides to exit the game.

Modifications

You can modify the range of the random number by changing the arguments of the rand() function.
You can adjust the number of attempts allowed by modifying the attempts variable.
Feel free to customize the messages and the scoring system according to your preferences.

Note

This game is a simple demonstration and can be enhanced further with additional features such as user authentication, difficulty levels, or a graphical interface.