#include <stdio.h>
#include <stdlib.h>

int main()
{
  int helloWorld = 0;
//  int helloCounter = 0;
  int helloCounter;

  printf("How many times do I have to tell you ' Hello World ' ? ");
  scanf_s("%d", &helloWorld);

/* WHILE

while (helloCounter < helloWorld)
  {
    printf("\nHello World");
    helloCounter++;
  }

*/

//for (INITIALISATION ; CONDITION ; INCRÉMENTATION)

  for (helloCounter = 0; helloCounter < helloWorld; helloCounter++)
  {
    printf("\nHello World");
  }

  printf("\n");
  return 0;
}