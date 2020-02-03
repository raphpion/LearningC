#include <stdio.h>
#include <stdlib.h>

/* DEUX FONCTIONS :

malloc (� Memory ALLOCation �, c'est-�-dire � Allocation de m�moire �) : demande au syst�me d'exploitation la permission d'utiliser de la m�moire ;

free(� Lib�rer �) : permet d'indiquer � l'OS que l'on n'a plus besoin de la m�moire qu'on avait demand�e.
La place en m�moire est lib�r�e, un autre programme peut maintenant s'en servir au besoin.*/

int main()
{
//  int* memoireAllouee = NULL;

//  memoireAllouee = malloc(sizeof(int));
//  if (memoireAllouee == NULL)
//  {
//    exit(0);
//  }

  // Utilisation de la m�moire
//  printf("Quel age avez-vous? ");
//  scanf_s("%d", memoireAllouee);
//  printf("Vous avez %d ans\n", *memoireAllouee);

  /* Attention : comme  memoireAllouee  est un pointeur, on ne l'utilise pas de la m�me mani�re qu'une vraie variable. 
  Pour obtenir la valeur de la variable, il faut placer une �toile devant : *memoireAllouee. 
  Tandis que pour indiquer l'adresse, on a juste besoin d'�crire le nom du pointeur memoireAllouee */

//  free(memoireAllouee); // On n'a plus besoin de la m�moire, on la lib�re

  int friendsAmount = 0, i = 0;
  int* ageFriends = NULL; // Ce pointeur va servir de tableau apr�s l'appel du malloc

  // On demande � l'utilisateur son nombre d'amis.
  printf("How many friends do you have? ");
  scanf_s("%d", &friendsAmount);

  if (friendsAmount > 0)
  {
    ageFriends = malloc(friendsAmount * sizeof(int)); // Allocation de la m�moire au tableau
    if (ageFriends == NULL)
    {
      exit(0);
    }

    // On demande l'�ge des amis un � un
    for (i = 0; i < friendsAmount; i++)
    {
      printf("How old is your friend number %d? ", i+1);
      scanf_s("%d", &ageFriends[i]);
    }

    // Affichage des amis stock�s
    for (i = 0; i < friendsAmount; i++)
    {
      printf("%d years old\n", ageFriends[i]);
    }

    free(ageFriends); // lib�ration de la m�moire
  }

  return 0;
}