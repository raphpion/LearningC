#include <stdio.h>
#include <stdlib.h>

/*for (i = 0; i < 4; i++)       initialisation : mani�re en boucle
{
  tableau[i] = 0;
}

printf("%p\n\n", tableau); // �criture de l'adresse de la case 0 du tableau.

printf("%d\n", *tableau); // �criture de la valeur de la premi�re valeur du tableau;
printf("%d\n", tableau[1]); // �criture de la valeur de la case 1 du tableau;
printf("%d\n", *(tableau + 2)); // �criture de la valeur de la case 2 du tableau;
printf("%d\n\n", tableau[3]); // �criture de la valeur de la case 3 du tableau;

En clair, quand vous �crivez tableau[0], vous demandez la valeur qui se trouve � l'adresse tableau + 0 case (c'est - � - dire 1600).
Si vous �crivez tableau[1], vous demandez la valeur se trouvant � l'adresse tableau + 1 case (c'est - � - dire 1601).

for (i = 0; i < 4; i++) // m�thode plus efficace : boucle for
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