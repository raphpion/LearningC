#include <stdio.h>
#include <stdlib.h>

/* 

Pour afficher l'adresse de la variable, on doit utiliser le symbole %p(le p du mot « pointeur ») dans le printf
Pour demander à avoir la valeur de la variable se trouvant à l'adresse indiquée dans le pointeur, il faut placer le symbole * devant le nom du pointeur.

En résumé :
Chaque variable est stockée à une adresse précise en mémoire.

Les pointeurs sont semblables aux variables, à ceci près qu'au lieu de stocker un nombre
ils stockent l'adresse à laquelle se trouve une variable en mémoire.

Si on place un symbole&devant un nom de variable, on obtient son adresse au lieu de sa valeur (ex. :&age).

Si on place un symbole*devant un nom de pointeur, on obtient la valeur de la variable stockée à l'adresse indiquée par le pointeur.

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