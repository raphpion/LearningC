#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#include "game.h"

int main()
{
  int choice = 0, again = 1, gameWordLength = 0, i = 0, lives = 10, answered[26] = { 0 };
  char gameWord[100] = { 0 }, currentWord[100] = { 0 };
  srand(time(NULL));

  title();
  do
  {
    switch (menu(choice, again))
    {
    case 1:
      printf("= Single Player Game =\n\n");
      getWord(gameWord, currentWord);
//      printf("\n\n%s, %ld caracteres.\n", gameWord, strlen(gameWord));
      inGame(gameWord, currentWord, answered, lives);
      break;
    case 2:
      printf("= Multiplayer Game =\n\n");
      enterWord(gameWord, currentWord);
      inGame(gameWord, currentWord, answered, lives);
      break;
    case 3:
      again = 0;
      break;
    }
  } while (again != 0);

  return 0;
}