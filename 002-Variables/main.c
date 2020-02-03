#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 
EXERCICE 1 -> DÉCLARATION ET AFFICHAGE DE VARIABLES

int main()
{
  const INIT_LIVES = 5;
  int lives = 5;
  long gold = 0;
  long experience = 0;
  printf("Your character has %d lives left.\n", lives);
  printf("There is currently %ld gold coins in your pouch.\n", gold);
  printf("Your adventures have got you %ld experience points so far.\n\n", experience);
  printf("Davus Black: %d HP, %ld GP, %ld XP.\n", lives, gold, experience);
  return 0;
}
*/

/* EXERCICE 2 -> RÉCUPÉRATION DE SAISIE*/

int main()
{
  int age = 0;
  printf("How old is your character? ");
  scanf_s("%d", &age);
  printf("Your character is %d years old.\n", age);
  return 0; 
}
