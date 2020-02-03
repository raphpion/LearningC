#include "tableaux.h"
void remplirTableau(int tableau[], int tailleTableau)
{
  int i = 0, valeur = 0;

  for (i = 0; i < tailleTableau; i++)
  {
    printf("[Valeur %d] ", i);
    scanf_s("%d", &tableau[i]);
  }
}

void afficherTableau(int tableau[], int tailleTableau)
{
  int i = 0;

  for (i = 0; i < tailleTableau; i++)
  {
    printf("%d\n", tableau[i]);
  }
}

int sommeTableau(int tableau[], int tailleTableau)
{
  int i = 0, resultat = 0;

  for (i = 0; i < tailleTableau; i++)
  {
    resultat += tableau[i];
  }

  return resultat;
}

double moyenneTableau(int tableau[], int tailleTableau)
{
  int total = sommeTableau(tableau, tailleTableau);
  double resultat = total / tailleTableau;

  return resultat;
}

void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau)
{
  int i = 0;

  for (i = 0; i < tailleTableau; i++)
  {
    tableauCopie[i] = tableauOriginal[i];
  }
}

int maximumTableau(int tableau[], int tailleTableau)
{
  int i = 0, max = tableau[0];

  for (i = 0; i < tailleTableau; i++)
  {
    if (tableau[i] > max)
    {
      max = tableau[i];
    }
  }

  return max;
}

int minimumTableau(int tableau[], int tailleTableau)
{
  int i = 0, min = tableau[0];

  for (i = 0; i < tailleTableau; i++)
  {
    if (tableau[i] < min)
    {
      min = tableau[i];
    }
  }

  return min;
}

void limitTableau(int tableau[], int tailleTableau, int valeurMax)
{
  int i = 0;

  for (i = 0; i < tailleTableau; i++)
  {
    if (tableau[i] > valeurMax)
    {
      tableau[i] = 0;
    }
  }
}

void ordonnerTableau(int tableau[], int tailleTableau) // intégration de l'algorithme Bubbles
{
  int i, temp, swapped;

  while (1)
  {
    swapped = 0;

    for (i = 0; i < tailleTableau - 1; i++)
    {
      if (tableau[i] > tableau[i + 1])
      {
        int temp = tableau[i];
        tableau[i] = tableau[i + 1];
        tableau[i + 1] = temp;
        swapped = 1;
      }
    }

    if (swapped == 0)
    {
      break;
    }

  }
}
