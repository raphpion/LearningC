#include <stdio.h>
#include <stdlib.h>

/*

SYMBOLES DES CONDITIONS

==    est �gal �
>     est sup�rieur �
<     est inf�rieur �
>=    est sup�rieur ou �gal �
<=    est inf�rieur ou �gal �
!=    est diff�rent de

PLUSIEURS CONDITIONS

&&    ET
||    OU
!     NON

Pour renvoyer le r�sultat d'une condition dans une variable : var = [condition]
O� vrai = 1 et faux = 0

Retenez donc : si votre variable est cens�e contenir un nombre (comme un �ge), faites un test sous la formeif (variable == 1).
si votre variable est cens�e contenir un bool�en (c'est-�-dire soit 1 soit 0 pour dire vrai ou faux), 
faites un test sous la formeif (variable).

*/

/* int main()
{
  int age;
  printf("Hi! How old are you? ");
  scanf_s("%d", &age);
  if (age > 100)
  {
    printf("You are.. immortal?\n");
  }
  else if (age >= 18)
  {
    printf("You are an adult.\n");
  }
  else if (age <= 0)
  {
    printf("You are an idiot.\n");
  }
  else
  {
    printf("You are a minor.\n");
  }
  return 0;
}

SWITCH
Un raccourci aux ' else if ' interminables..

*/

int main()
{
  int choice;
  printf("=== MENU ===\n\n");
  printf("1. Royal Cheese\n");
  printf("2. Mc Deluxe\n");
  printf("3. Mc Bacon\n");
  printf("4. Big Mac\n\n");
  printf("What would you like to order ? ");
  scanf_s("%d", &choice);
  printf("\n");
  switch (choice)
  {
  case 1:
    printf("One Royal Cheese on the way!");
    break;
  case 2:
    printf("One gigantic Mc Deluxe for the hungry one!");
    break;
  case 3:
    printf("A Mc Bacon for the bacon lover in the house!");
    break;
  case 4:
    printf("A classic Big Mac for you.");
    break;
  default:
    printf("What the fuck is wrong with you?");
    break;
  }
  printf("\n\n");

  return 0;
}

/* TERNAIRES : conditions condens�es

Sans condensement :
if (majeur)
  age = 18;
else
  age = 17;

M�me fonction mais condens�e :
age = (majeur) ? 18 : 17;

*/