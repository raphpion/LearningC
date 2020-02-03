#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TEAM_SIZE 2
#define NAMELENGTH 100
#define SURNAMELENGTH 100
#define RACELENGTH 100
#define CLASSLENGTH 100

typedef struct Character Character;
struct Character
{
  char name[NAMELENGTH];
  char surname[SURNAMELENGTH];
  char race[RACELENGTH];
  char class[CLASSLENGTH];
  int lvl;
};
int menu(int a);
void displayTeam(Character team[], int size);

int main()
{
  Character team[TEAM_SIZE] = { 0 };
  int i = 0, choice = 0;
  char* specialChar = NULL;

  printf("=== CHARACTER BUILDER v1.0\n\n");
  printf("With the help of this tool, you will build a team of four characters by answering simple questions.\n\n");

  for (i = 0; i < TEAM_SIZE; i++)
  {

    printf("[Character n.%d]\n\n", i + 1);

    printf("Name: ");
    scanf_s("%s", team[i].name, (unsigned)_countof(team[i].name));

    printf("Surname: ");
    scanf_s("%s", team[i].surname, (unsigned)_countof(team[i].surname));

    do // SÉLECTION DE LA RACE
    {
      choice = 0;
      printf("\nRace:\n");
      printf("1. Human\n");
      printf("2. Elf\n");
      printf("3. Dwarf\n");
      printf("4. Halfling\n");
      printf("5. Custom\n");
      printf("Enter your choice..");
      scanf_s("%d", &choice);
    } while (choice < 1 || choice > 5);

    switch (choice)
    {
    case 1:
      strcat_s(team[i].race, RACELENGTH, "Human");
      break;
    case 2:
      strcat_s(team[i].race, RACELENGTH, "Elf");
      break;
    case 3:
      strcat_s(team[i].race, RACELENGTH, "Dwarf");
      break;
    case 4:
      strcat_s(team[i].race, RACELENGTH, "Halfling");
      break;
    case 5:
      printf("Enter your race then, snowflake..");
      scanf_s("%s", team[i].race, (unsigned)_countof(team[i].race));
      break;
    }

    do // SÉLECTION DE LA CLASSE
    {
      choice = 0;
      printf("\nClass:\n");
      printf("1. Warrior\n");
      printf("2. Ranger\n");
      printf("3. Mage\n");
      printf("4. Rogue\n");
      printf("5. Custom\n");
      printf("Enter your choice..");
      scanf_s("%d", &choice);
    } while (choice < 1 || choice > 5);

    switch (choice)
    {
    case 1:
      strcat_s(team[i].class, CLASSLENGTH, "Warrior");
      break;
    case 2:
      strcat_s(team[i].class, CLASSLENGTH, "Ranger");
      break;
    case 3:
      strcat_s(team[i].class, CLASSLENGTH, "Mage");
      break;
    case 4:
      strcat_s(team[i].class, CLASSLENGTH, "Rogue");
      break;
    case 5:
      printf("Enter your class then, snowflake..");
      scanf_s("%s", team[i].class, (unsigned)_countof(team[i].class));
      break;
    }

    team[i].lvl = 1;
    printf("\n");
  }

  displayTeam(team, TEAM_SIZE);

  return 0;
}

void displayTeam(Character team[], int size)
{
  int x = 0;

  for (x = 0; x < size; x++)
  {
    printf("%s %s (%s) - Level %d %s.\n", team[x].name, team[x].surname, team[x].race, team[x].lvl, team[x].class);
  }
}