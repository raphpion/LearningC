#include <stdio.h>
#include <stdlib.h>

/* DEUX FONCTIONS :

malloc (« Memory ALLOCation », c'est-à-dire « Allocation de mémoire ») : demande au système d'exploitation la permission d'utiliser de la mémoire ;

free(« Libérer ») : permet d'indiquer à l'OS que l'on n'a plus besoin de la mémoire qu'on avait demandée.
La place en mémoire est libérée, un autre programme peut maintenant s'en servir au besoin.*/

int main()
{
//  int* memoireAllouee = NULL;

//  memoireAllouee = malloc(sizeof(int));
//  if (memoireAllouee == NULL)
//  {
//    exit(0);
//  }

  // Utilisation de la mémoire
//  printf("Quel age avez-vous? ");
//  scanf_s("%d", memoireAllouee);
//  printf("Vous avez %d ans\n", *memoireAllouee);

  /* Attention : comme  memoireAllouee  est un pointeur, on ne l'utilise pas de la même manière qu'une vraie variable. 
  Pour obtenir la valeur de la variable, il faut placer une étoile devant : *memoireAllouee. 
  Tandis que pour indiquer l'adresse, on a juste besoin d'écrire le nom du pointeur memoireAllouee */

//  free(memoireAllouee); // On n'a plus besoin de la mémoire, on la libère

  int friendsAmount = 0, i = 0;
  int* ageFriends = NULL; // Ce pointeur va servir de tableau après l'appel du malloc

  // On demande à l'utilisateur son nombre d'amis.
  printf("How many friends do you have? ");
  scanf_s("%d", &friendsAmount);

  if (friendsAmount > 0)
  {
    ageFriends = malloc(friendsAmount * sizeof(int)); // Allocation de la mémoire au tableau
    if (ageFriends == NULL)
    {
      exit(0);
    }

    // On demande l'âge des amis un à un
    for (i = 0; i < friendsAmount; i++)
    {
      printf("How old is your friend number %d? ", i+1);
      scanf_s("%d", &ageFriends[i]);
    }

    // Affichage des amis stockés
    for (i = 0; i < friendsAmount; i++)
    {
      printf("%d years old\n", ageFriends[i]);
    }

    free(ageFriends); // libération de la mémoire
  }

  return 0;
}