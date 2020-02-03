#include <stdio.h>
#include <stdlib.h>
#define CONSTANT_NAME 3
#define RACONTER_SA_VIE()   printf("Coucou, je m'appelle Brice\n"); \
                            printf("J'habite a Nice\n"); \
                            printf("J'aime la glisse\n");
#define MAJEUR(age) if (age >= 18) \
                       printf("Vous etes majeur."); \
                    else \
                       printf("Vous etes mineur.");
#ifndef DEF_NOMDUFICHIER // Si la constante n'a pas été définie le fichier n'a jamais été inclus
#define DEF_NOMDUFICHIER // On définit la constante pour que la prochaine fois le fichier ne soit plus inclus

/* Contenu de votre fichier .h (autres include, prototypes, define...) */

#endif

/* Permet de définir une constante sans utiliser d'espace dans la mémoire. 
exemple concret : taille de fenêtre.
autre exemple : taille maximale d'un tableau

En plus des constantes que vous pouvez définir vous-mêmes, il existe quelques constantes prédéfinies par le préprocesseur :

__LINE__: donne le numéro de la ligne actuelle.
__FILE__: donne le nom du fichier actuel.
__DATE__: donne la date de la compilation.
__TIME__: donne l'heure de la compilation.

Ces constantes peuvent être utiles pour gérer des erreurs, */

int main()
{
  MAJEUR(17)
  return 0;
}