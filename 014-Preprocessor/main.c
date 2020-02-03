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
#ifndef DEF_NOMDUFICHIER // Si la constante n'a pas �t� d�finie le fichier n'a jamais �t� inclus
#define DEF_NOMDUFICHIER // On d�finit la constante pour que la prochaine fois le fichier ne soit plus inclus

/* Contenu de votre fichier .h (autres include, prototypes, define...) */

#endif

/* Permet de d�finir une constante sans utiliser d'espace dans la m�moire. 
exemple concret : taille de fen�tre.
autre exemple : taille maximale d'un tableau

En plus des constantes que vous pouvez d�finir vous-m�mes, il existe quelques constantes pr�d�finies par le pr�processeur :

__LINE__: donne le num�ro de la ligne actuelle.
__FILE__: donne le nom du fichier actuel.
__DATE__: donne la date de la compilation.
__TIME__: donne l'heure de la compilation.

Ces constantes peuvent �tre utiles pour g�rer des erreurs, */

int main()
{
  MAJEUR(17)
  return 0;
}