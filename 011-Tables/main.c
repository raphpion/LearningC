#include <stdio.h>
#include <stdlib.h>

/*for (i = 0; i < 4; i++)       initialisation : manière en boucle
{
  tableau[i] = 0;
}

printf("%p\n\n", tableau); // écriture de l'adresse de la case 0 du tableau.

printf("%d\n", *tableau); // écriture de la valeur de la première valeur du tableau;
printf("%d\n", tableau[1]); // écriture de la valeur de la case 1 du tableau;
printf("%d\n", *(tableau + 2)); // écriture de la valeur de la case 2 du tableau;
printf("%d\n\n", tableau[3]); // écriture de la valeur de la case 3 du tableau;

En clair, quand vous écrivez tableau[0], vous demandez la valeur qui se trouve à l'adresse tableau + 0 case (c'est - à - dire 1600).
Si vous écrivez tableau[1], vous demandez la valeur se trouvant à l'adresse tableau + 1 case (c'est - à - dire 1601).

for (i = 0; i < 4; i++) // méthode plus efficace : boucle for
{
  printf("%d\n", tableau[i]);
} */

// Prototype de la fonction d'affichage
void affiche(int* tableau, int tailleTableau);

int main()
{

  int tableau[4] = { 14, 7, 3 };

  // On affiche les valeurs du tableau en appelant la fonction d'affichage
  affiche(tableau, 4);

  return 0;
}

void affiche(int* tableau, int tailleTableau) // fonction permettant d'afficher toutes les cases d'un tableau
{
  int i;

  for (i = 0; i < tailleTableau; i++)
  {
    printf("%d\n", tableau[i]);
  }
}