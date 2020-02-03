#include <stdio.h>
#include <stdlib.h>
#define TAILLE_MAX = 1000

/* MODES D'OUVERTURE
"r": lecture seule. Vous pourrez lire le contenu du fichier, mais pas y �crire. Le fichier doit avoir �t� cr�� au pr�alable.
"w": �criture seule. Vous pourrez �crire dans le fichier, mais pas lire son contenu. Si le fichier n'existe pas, il sera cr��.
"a": mode d'ajout. Vous �crirez dans le fichier, en partant de la fin du fichier. Vous ajouterez donc du texte � la fin du fichier. 
                   Si le fichier n'existe pas, il sera cr��.
"r+": lecture et �criture. Vous pourrez lire et �crire dans le fichier. Le fichier doit avoir �t� cr�� au pr�alable.
"w+": lecture et �criture, avec suppression du contenu au pr�alable. Le fichier est donc d'abord vid� de son contenu, vous pouvez y 
                           �crire, et le lire ensuite. Si le fichier n'existe pas, il sera cr��.
"a+": ajout en lecture / �criture � la fin. Vous �crivez et lisez du texte � partir de la fin du fichier. Si le fichier n'existe pas, il sera cr��.

MODES D'�CRITURE

fputc: �crit un caract�re dans le fichier (UN SEUL caract�re � la fois)
fputs: �crit une cha�ne dans le fichier
fprintf: �crit une cha�ne � format�e � dans le fichier, fonctionnement quasi-identique �printf

MODES DE LECTURE

fgetc: lit un caract�re
fgets: lit une cha�ne
fscanf: lit une cha�ne format�e.

D�PLACEMENT DANS LE FICHIER

ftell: indique � quelle position vous �tes actuellement dans le fichier
fseek: positionne le curseur � un endroit pr�cis
rewind: remet le curseur au d�but du fichier (c'est �quivalent � demander � la fonction fseek de positionner le curseur au d�but).

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
      printf("%s", chaine); // On affiche la cha�ne qu'on vient de lire
    }

    fclose(fichier);
  }

  else
  {
    printf("Impossible d'ouvrir le fichier test.txt");
  }
  return 0;
}