#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Pour faire fonctionner scanf_s; il faut rajouter (unsigned)_countof(variable) en deuxi�me param�tre.*/

int main(int argc, char* argv[])
{
  /*char chaine[] = "Salut", copie[100] = { 0 };
  int longueurChaine = 0;

  // pour r�cup�rer la longueur de la cha�ne
  longueurChaine = strlen(chaine);

  printf("La chaine '%s' comporte %d caracteres.", chaine, longueurChaine);

  strcpy(copie, chaine);        --->          fonction pour copier la cha�ne
  printf("%s", copie);

  strcat(chaine1, chaine2);        --->          fonction pour ajouter chaine2 apres chaine1
  printf("Votre nom complet est donc %s.", prenom);

  strcmp(chaine, chaine2);        --->          fonction pour comparer 2 cha�nes. Renvoie 0 si elles sont identiques.

  strchr(chaine, 'caract�re');        --->          fonction qui renvoie la fin de la cha�ne apr�s le caract�re entr�.

  Il existe une fonction strrchr strictement identique � strchr, sauf que celle-l� renvoie un pointeur vers le dernier caract�re
  qu'elle a trouv� dans la cha�ne plut�t que vers le premier.

  La fonction strpbrk ressemble beaucoup � la pr�c�dente. Celle-ci recherche un des caract�res dans la liste que vous lui donnez sous forme de cha�ne,
  contrairement � strchr qui ne peut rechercher qu'un seul caract�re � la fois..
  
  strstr: rechercher une cha�ne dans une autre

  // On �crit "Tu as 15 ans" dans chaine
  sprintf(chaine, "Tu as %d ans !", age);

  // On affiche chaine pour v�rifier qu'elle contient bien cela :
  printf("%s", chaine);

  return 0;
}