#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void title()
{
  printf("=== Hangman Game v1.0 ===\n");
  printf("Word guessing game by Davus Black.\n\n");
}

int menu(int choice, int again)
{
  do
  {
    printf("== Main Menu ==\n\n");
    printf("1. Single Player\n");
    printf("2. Multiplayer\n");
    printf("3. Quit\n\n");
    printf("Enter an option to continue..");
    scanf_s("%d", &choice);
    printf("\n");
  } while (choice < 1 || choice > 3);

  return choice;
}