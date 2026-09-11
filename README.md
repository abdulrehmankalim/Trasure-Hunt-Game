## Maze Runner Treasure Hunt

## About the Project:
Maze Runner Treasure Hunt is a small C++ console game based on a 5×5 maze. The main idea of the game is to find the treasure by following the coordinates given by each cell.
Each cell contains a two-digit number. The first digit tells the row and the second digit tells the column of the next cell.
For example, if a cell contains `34`, it means the next cell to visit is **row 3, column 4**.
The player enters the coordinates, checks the value in that position, and then follows the clue to the next position.

## How the Game Works:
* The game uses a 5×5 two-dimensional array.
* The player enters a row and column from 1 to 5.
* The program checks if the entered coordinates are valid.
* The value of the selected cell is displayed.
* The value gives the coordinates of the next cell.
* The player keeps following the clues until the treasure is found.
* The program also keeps track of visited cells so the same cell cannot be visited again.

Example:
If the player enters:

```text
Enter row (1-5): 1
Enter column (1-5): 1
```

The value at that position is:
```text
34
```
So the program gives:
```text
Next clue suggests: (3,4)
```
The player can then enter `3,4` and continue the hunt.

## C++ Concepts Used:
While making this project, I used some basic C++ concepts such as:
* 2D arrays
* Functions
* While loop
* If conditions
* Boolean variables
* User input
* Array indexing
* Reference variables
* Basic input and output

## Functions:
### `IfTreasureFound()`
This function checks whether the current position is the treasure location.

### `ForNextPosition()`
This function takes the number stored in a cell and separates it into the row and column for the next position.

Requirements:
To run this project, you just need:
* C++ compiler
* VS Code, Visual Studio, Code::Blocks, or any other C++ IDE

## Running the Project:
1. Open the `.cpp` file in your C++ editor.
2. Compile the program.
3. Run it.
4. Enter the row and column when the program asks.
5. Follow the coordinates until you find the treasure.

## What I Learned:
I made this project to practice the C++ concepts I have learned so far. It helped me understand how 2D arrays, functions, loops, conditions, and user input can be used together to make a simple game.

## Possible Improvements:
In the future, I can add things like:
* A scoring system
* Limited attempts
* Different difficulty levels
* A proper maze display
* A restart option
* Better input validation
* A graphical interface

##Screenshots:
### Main Menu:
! <img width="1156" height="242" alt="image" src="https://github.com/user-attachments/assets/c216796c-acbc-4deb-9420-fc30be1a2939" />

### Gameplay:
!<img width="1201" height="497" alt="image" src="https://github.com/user-attachments/assets/6dbb8374-8678-475c-9bc7-cc878784202f" />
!<img width="909" height="145" alt="image" src="https://github.com/user-attachments/assets/8f384ba8-52c1-4551-932d-430d505ff58c" />
