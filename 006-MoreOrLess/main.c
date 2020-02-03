#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* La fonction rand() génère un nombre aléatoire.
//  printf("=== RANDOM NUMBER GAME [%d] ===\n\n", numberQ); */

int main()
{
  int numberQ;
  int numberA = 0;
  int count = 0;
  int countHide = 0;
  int again = 1;
  int option;
  int ingame = 0;
  int gamemode = 0;
  int start = 0;
  int maxNumber = 100;
  const int MIN = 1;

  srand(time(NULL));

  do
  {

    if (ingame == 0) // MENU
    {
      printf("=== RANDOM NUMBER GAME ===\n\n");
      printf("1. Single Player game\n");
      printf("2. Two-Player game\n");
      printf("3. Quit\n\n");
      printf("Select an option. ");
      scanf_s("%d", &option);
      switch (option)
      {
      case 1:
        printf("\n\n");
        gamemode = 0;
        ingame = 1;
        break;
      case 2:
        printf("\n\n");
        gamemode = 1;
        ingame = 1;
        break;
      case 3:
        printf("\n\n");
        again = 0;
        break;
      default:
        printf("\n\n");
        printf("Invalid option, try again.\n\n");
        break;
      }
    }

    else if (ingame == 1) // EN JEU
    {
      if (gamemode == 0) // Single Player setup
      {
        do
        {
          printf("== SINGLE PLAYER GAME ==\n\n");
          printf("1. Easy [1-100]\n");
          printf("2. Normal [1-1'000]\n");
          printf("3. Hard [1-10'000]\n\n");
          printf("Select an option. ");
          scanf_s("%d", &option);
          printf("\n");
          switch (option)
          {
          case 1:
            maxNumber = 100;
            start = 1;
            break;
          case 2:
            maxNumber = 1000;
            start = 1;
            break;
          case 3:
            maxNumber = 10000;
            start = 1;
            break;
          default:
            printf("Invalid option.\n\n");
            break;
          }
        } while (start == 0);

        numberQ = (rand() % (maxNumber - MIN + 1)) + MIN; // génération du nombre aléatoire
        count = 0;

      }

      else if (gamemode == 1) // Two Player setup
      {
        printf("== TWO-PLAYER GAME ==\n\n");
        printf("Player 1, don't look at the screen.\n");
        printf("Player 2 will now enter a number: ");
        scanf_s("%d", &numberQ);
        while (countHide < 50)
        {
          printf("\n\n");
          countHide++;
        }
        countHide = 0;
        count = 0;
        printf("Player 1 will now try to guess Player 2's number!\n");
      }

      else // Invalid mode
      {
        printf("Unexpected value for ' gamemode '");  // Si gamemode pas égal à 1 ou 2, rapport d'erreur.
        again = 0;
      }
      
      do // GAME STARTS
      {
        count++;
        printf("What is your guess? ");
        scanf_s("%d", &numberA);
        if (numberA == numberQ)
        {
          printf("\nYour guess #%d was right. You win!\n", count);
          printf("1. Play Again\n");
          printf("2. Main menu\n");
          printf("3. Quit\n\n");
          printf("Select an option. ");
          start = 0;
          scanf_s("%d", &option);
          printf("\n");

          switch (option)
          {
          case 1:
            again = 1;
            break;
          case 2:
            ingame = 0;
            break;
          case 3:
            again = 0;
            break;
          }
        }
        else if (numberA > numberQ)
          printf("Try going lower. ");
        else
          printf("Try going higher. ");
      } while (numberA != numberQ);
    }

    else // Invalid ingame
    {
      printf("Unexpected value for ' ingame '");  // Si ingame pas égal à 0 ou 1, rapport d'erreur.
      again = 0;
    }

  } while (again == 1);

  return 0;
}
