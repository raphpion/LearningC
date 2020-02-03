#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Pour faire fonctionner scanf_s; il faut rajouter (unsigned)_countof(variable) en deuxième paramètre.*/

int main(int argc, char* argv[])
{
  /*char chaine[] = "Salut", copie[100] = { 0 };
  int longueurChaine = 0;

  // pour récupérer la longueur de la chaîne
  longueurChaine = strlen(chaine);

  printf("La chaine '%s' comporte %d caracteres.", chaine, longueurChaine);

  strcpy(copie, chaine);        --->          fonction pour copier la chaîne
  printf("%s", copie);

  strcat(chaine1, chaine2);        --->          fonction pour ajouter chaine2 apres chaine1
  printf("Votre nom complet est donc %s.", prenom);

  strcmp(chaine, chaine2);        --->          fonction pour comparer 2 chaînes. Renvoie 0 si elles sont identiques.

  strchr(chaine, 'caractère');        --->          fonction qui renvoie la fin de la chaîne après le caractère entré.

  Il existe une fonction strrchr strictement identique à strchr, sauf que celle-là renvoie un pointeur vers le dernier caractère
  qu'elle a trouvé dans la chaîne plutôt que vers le premier.

  La fonction strpbrk ressemble beaucoup à la précédente. Celle-ci recherche un des caractères dans la liste que vous lui donnez sous forme de chaîne,
  contrairement à strchr qui ne peut rechercher qu'un seul caractère à la fois..
  
  strstr: rechercher une chaîne dans une autre

  // On écrit "Tu as 15 ans" dans chaine
  sprintf(chaine, "Tu as %d ans !", age);

  // On affiche chaine pour vérifier qu'elle contient bien cela :
  printf("%s", chaine);

  return 0;
}