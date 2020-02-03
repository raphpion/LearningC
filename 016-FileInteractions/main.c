#include <stdio.h>
#include <stdlib.h>
#define TAILLE_MAX = 1000

/* MODES D'OUVERTURE
"r": lecture seule. Vous pourrez lire le contenu du fichier, mais pas y écrire. Le fichier doit avoir été créé au préalable.
"w": écriture seule. Vous pourrez écrire dans le fichier, mais pas lire son contenu. Si le fichier n'existe pas, il sera créé.
"a": mode d'ajout. Vous écrirez dans le fichier, en partant de la fin du fichier. Vous ajouterez donc du texte à la fin du fichier. 
                   Si le fichier n'existe pas, il sera créé.
"r+": lecture et écriture. Vous pourrez lire et écrire dans le fichier. Le fichier doit avoir été créé au préalable.
"w+": lecture et écriture, avec suppression du contenu au préalable. Le fichier est donc d'abord vidé de son contenu, vous pouvez y 
                           écrire, et le lire ensuite. Si le fichier n'existe pas, il sera créé.
"a+": ajout en lecture / écriture à la fin. Vous écrivez et lisez du texte à partir de la fin du fichier. Si le fichier n'existe pas, il sera créé.

MODES D'ÉCRITURE

fputc: écrit un caractère dans le fichier (UN SEUL caractère à la fois)
fputs: écrit une chaîne dans le fichier
fprintf: écrit une chaîne « formatée » dans le fichier, fonctionnement quasi-identique àprintf

MODES DE LECTURE

fgetc: lit un caractère
fgets: lit une chaîne
fscanf: lit une chaîne formatée.

DÉPLACEMENT DANS LE FICHIER

ftell: indique à quelle position vous êtes actuellement dans le fichier
fseek: positionne le curseur à un endroit précis
rewind: remet le curseur au début du fichier (c'est équivalent à demander à la fonction fseek de positionner le curseur au début).

MODIFICATION DE FICHIER

rename: renomme un fichier
remove: supprime un fichier.

*/

int main()
{
  FILE* fichier = NULL;
  char chaine[1000] = "";

  fopen_s(&fichier, "test.txt", "r");

  if (fichier != NULL) // fonction d'affichage du fichier
  {
    while (fgets(chaine, 1000, fichier) != NULL)
    {
      printf("%s", chaine); // On affiche la chaîne qu'on vient de lire
    }

    fclose(fichier);
  }

  else
  {
    printf("Impossible d'ouvrir le fichier test.txt");
  }
  return 0;
}