#include <stdio.h>
#include <stdlib.h>
#include "tableaux.h"

int menu(int a);

int main()
{
  int choix = 0, again = 1, resultat = 0, limite = 0, tableau[5] = { 0 }, tableau2[5] = { 0 }, tempTableau[5] = { 0 };
  double moyenne = 0;

  do
  { 
    printf("=== TABLE TOOL v1.0 ===\n\n");
    printf("Veuillez remplir le tableau pour continuer :\n\n");
    remplirTableau(tableau, 5);
    printf("\n");
    switch (menu(choix))
    {
    case 1: // SOMME
      resultat = sommeTableau(tableau, 5);
      printf("La somme du tableau vaut %d.\n\n", resultat);
      break;

    case 2: // MOYENNE
      moyenne = moyenneTableau(tableau, 5);
      printf("La moyenne du tableau vaut %.2f.\n\n", moyenne);
      break;

    case 3: // COPIE
      copie(tableau, tableau2, 5);
      afficherTableau(tableau, 5);
      printf("\n");
      afficherTableau(tableau2, 5);
      printf("\n\n");
      break;

    case 4: // MAXIMUM
      resultat = maximumTableau(tableau, 5);
      printf("La valeur maximale du tableau est %d.\n\n", resultat);
      break;

    case 5: // LIMITE
      printf("Entrez une valeur limite pour le tableau..");
      scanf_s("%d", &limite);
      limitTableau(tableau, 5, limite);
      printf("La limite a ete appliquee.\n");
      afficherTableau(tableau, 5);
      printf("\n\n");
      break;

    case 6: // ORDONNER
      ordonnerTableau(tableau, 5);
      afficherTableau(tableau, 5);
      printf("\n\n");
      break;

    case 7: // QUITTER
      again = 0;
      break;
    }
  } while (again == 1);

  return 0;

}

int menu(int a)
{

  a = 0;

  while (a < 1 || a > 7)
  {
    printf("== MENU PRINCIPAL ==\n\n");
    printf("1. Somme d'un tableau\n");
    printf("2. Moyenne d'un tableau\n");
    printf("3. Copie d'un tableau\n");
    printf("4. Maximum d'un tableau\n");
    printf("5. Limiter les valeurs d'un tableau\n");
    printf("6. Classement d'un tableau\n");
    printf("7. Quitter l'application\n\n");
    printf("Veuillez entrer une option pour continuer..");
    scanf_s("%d", &a);
    printf("\n");
  }

  return a;

}