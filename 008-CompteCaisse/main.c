#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void countChange(int a, int b) // a = dollars, b = cents
{
  if (a >= 5)
  {
    printf("- Bills -\n\n");
    a = countDollar(a, 100);
    a = countDollar(a, 50);
    a = countDollar(a, 20);
    a = countDollar(a, 10);
    a = countDollar(a, 5);
  }

  if (a >= 0 || b >= 0)
  {
    printf("\n- Coins -\n\n");
    a = countDollar(a, 2);
    a = countDollar(a, 1);
    b = countCent(b, 25);
    b = countCent(b, 10);
    b = countCent(b, 5);
    b = countCent(b, 1);
  }
}

int countDollar(int a, int b)
{
  if (a >= b)
  {
    printf("  %d x %d$\n", a / b, b);
    return a %= b;
  }
}

int countCent(int a, int b)
{
  if (a >= b)
  {
    printf("  %d x %dc\n", a / b, b);
    return a %= b;
  }
}

int menu()
{
  int option = 0;
  while (option < 1 || option > 2)
  {
    printf("1. Other transaction\n");
    printf("2. Quit\n");
    printf("Enter an option to continue. ");
    scanf_s("%d", &option);
  }
  return option;
}

int main()
{
  double cost = 0, cash = 0, change = 0;
  int dollars = 0, cents = 0, again = 1;

  printf("=== CASHIER-MATE 1.0 ===\n");
  printf("Software by Davus Black, all rights reserved.\n\n");

  printf("Welcome to Cashier-Mate. This simple tool calculates\n");
  printf("the amount of change you need to give to your customer\n");
  printf("for a transaction.\n\n");
  
  do
  {
    printf("Enter the total cost of the transaction. ");
    scanf_s("%lf", &cost);

    printf("Enter the amount received. ");
    scanf_s("%lf", &cash);

    change = cash - cost;

    if (change < 0)
    {
      printf("\nThe customer still owes you $%.2f.\n\n", change *= -1);
    }
    else if (change == 0)
    {
      printf("\nYou don't owe the customer any money.\n\n");
    }
    else
    {
      dollars = change;
      cents = 100 * (change - dollars);
      printf("You owe $%.2f.\n\n",change);
      countChange(dollars, cents);
      printf("\n");
    }
    switch (menu())
    {
    case 1:
      again = 1;
      break;
    case 2:
      again = 0;
      break;
    }
  } while (again > 0);

  return 0;
}
