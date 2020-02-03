#include <stdio.h>
#include <stdlib.h>

/* 

Pour afficher l'adresse de la variable, on doit utiliser le symbole %p(le p du mot � pointeur �) dans le printf
Pour demander � avoir la valeur de la variable se trouvant � l'adresse indiqu�e dans le pointeur, il faut placer le symbole * devant le nom du pointeur.

En r�sum� :
Chaque variable est stock�e � une adresse pr�cise en m�moire.

Les pointeurs sont semblables aux variables, � ceci pr�s qu'au lieu de stocker un nombre
ils stockent l'adresse � laquelle se trouve une variable en m�moire.

Si on place un symbole&devant un nom de variable, on obtient son adresse au lieu de sa valeur (ex. :&age).

Si on place un symbole*devant un nom de pointeur, on obtient la valeur de la variable stock�e � l'adresse indiqu�e par le pointeur.

*/

void decoupeMinutes(int* pointeurHeures, int* pointeurMinutes);

int main()
{
  int heures = 0, minutes = 0;
  printf("Entrez un nombre de minutes pour la conversion : ");
  scanf_s("%d", &minutes);

  decoupeMinutes(&heures, &minutes);

  printf("\n\n%d heures et %d minutes\n\n", heures, minutes);

  return 0;
}

void decoupeMinutes(int* pointeurHeures, int* pointeurMinutes)
{
  *pointeurHeures = *pointeurMinutes / 60;
  *pointeurMinutes = *pointeurMinutes % 60;

  return 0;
}