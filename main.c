#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void UserInput(int input, char player, char board[3][3]) {
  switch (input) {
    case 1:
      if (player == 'X') {
        board[0][0] = 'X';
      } else if (player == 'O') {
        board[0][0] = 'O';
        }
      break;
    case 2:
      if (player == 'X') {
        board[0][1] = 'X';
      } else if (player == 'O') {
        board[0][1] = 'O';
        }
      break;
    case 3:
      if (player == 'X') {
        board[0][2] = 'X';
      } else if (player == 'O') {
        board[0][2] = 'O';
        }
      break;
    case 4:
      if (player == 'X') {
        board[1][0] = 'X';
      } else if (player == 'O') {
        board[1][0] = 'O';
        }
      break;
    case 5:
      if (player == 'X') {
        board[1][1] = 'X';
      } else if (player == 'O') {
        board[1][1] = 'O';
        }
      break;
    case 6:
      if (player == 'X') {
        board[1][2] = 'X';
      } else if (player == 'O') {
        board[1][2] = 'O';
        }
      break;
    case 7:
      if (player == 'X') {
        board[2][0] = 'X';
      } else if (player == 'O') {
        board[2][0] = 'O';
        }
      break;
    case 8:
      if (player == 'X') {
        board[2][1] = 'X';
      } else if (player == 'O') {
        board[2][1] = 'O';
        }
      break;
    case 9:
      if (player == 'X') {
        board[2][2] = 'X';
      } else if (player == 'O') {
        board[2][2] = 'O';
        }
      break;
  }
}

void DrawBoard(char board[3][3]) {
  system("clear");
  printf("\t\nPLAY FIELD:\n");
  printf("\n\t %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
  printf("\t---+---+---\n");
  printf("\t %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
  printf("\t---+---+---\n");
  printf("\t %c | %c | %c \n\n", board[2][0], board[2][1], board[2][2]);

}

void CheckWin(char board[3][3]) { 
  if ( (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') || (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') || (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') || (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') || (board[1][1] == 'X' && board[2][1] == 'X' && board[3][1] == 'X') || (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') || (board[0][0] == 'X' && board[1][1] == 'X' && board[3][3] == 'X') || (board[0][3] == 'X' && board[1][1] == 'X' && board[2][0] == 'X') ) {
    printf("X won!\n");
    exit(0);
  }

  if ( (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') || (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') || (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') || (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') || (board[1][1] == 'O' && board[2][1] == 'O' && board[3][1] == 'O') || (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') || (board[0][0] == 'O' && board[1][1] == 'O' && board[3][3] == 'O') || (board[0][3] == 'O' && board[1][1] == 'O' && board[2][0] == 'O') ) {
    printf("O won!\n");
    exit(0);
  }

}

int main(int argc, char* argv[]) {

  int xinput, oinput;
  char board[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
  };

  int gameLoop = 1;
  char player;
   
  while (gameLoop != 0) {
    
    DrawBoard(board);
    
    player = 'X';
    printf("Player X input: ");
    scanf("%d", &xinput);
     
    UserInput(xinput, player, board);
    DrawBoard(board); 
    CheckWin(board);
    

    player = 'O'; 
    printf("Player O input: ");
    scanf("%d", &oinput);
            
    UserInput(oinput, player, board);
    DrawBoard(board); 
    CheckWin(board);
  }

  return 0;
}
