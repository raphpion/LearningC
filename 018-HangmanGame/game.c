#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getWord(char* gameWord, char* currentWord)
{
  FILE* words = NULL;
  int cchar = 0, lineCount = 1, randomNumber;
  fopen_s(&words, "words.txt", "r");
  if (words != NULL)
  {
    do // compte du nombre de lignes
    {
      cchar = fgetc(words);
      if (cchar == '\n')
      {
        lineCount++;
      }
    } while (!feof(words));
     // génération du nombre aléatoire
    randomNumber = (rand() % (lineCount - 1 + 1)) + 1;
    rewind(words); // retour au début de words
    while (randomNumber > 1) // fonction pour se positionner avant le mot sélectionné
    {
      cchar = fgetc(words);
      if (cchar == '\n')
      {
        randomNumber--;
      }
    }
    /* Le curseur du fichier est positionné au bon endroit.
    On n'a plus qu'à faire un fgets qui lira la ligne */
    fgets(gameWord, 100, words);
    gameWord[strlen(gameWord) - 1] = '\0';
    
    for (cchar = 0; cchar < strlen(gameWord); cchar++)
    {
      currentWord[cchar] = '*';
    }
  }
  else
  {
    printf("Unable to load the words dictionnary..");
    exit(0);
  }
}

void enterWord(char* gameWord, char* currentWord)
{
  int correctWord = 1, i = 0, cchar = 0;
  char enteredWord[100] = { 0 };

  do
  {
    printf("Player 2 will now enter a word..");
    scanf_s("%s", enteredWord, (unsigned)_countof(enteredWord));
    for (i = 0; i < strlen(enteredWord); i++) // Vérifier qu'il n'y ait pas de caractères spéciaux
    {
      cchar = enteredWord[i];
      if (cchar > 64 && cchar < 91) {} // rien à faire, tout va bien
      else if (cchar > 96 && cchar < 123)
      {
        enteredWord[i] = toupper(enteredWord[i]); // mettre la lettre en majuscule
      }
      else
      {
        printf("An invalid character was entered. Special characters are not allowed.\n\n");
        correctWord = 0;
      }
    }

    
  } while (correctWord == 0);

  strcpy_s(gameWord, 100, enteredWord);
  for (cchar = 0; cchar < strlen(gameWord); cchar++)
  {
    currentWord[cchar] = '*';
  }

  for (i = 0; i < 50; i++)
  {
    printf("\n");
  }
}

void inGame(char* gameWord, char* currentWord, int* answered, int lives)
{
  int guess = 0, x = 0, isRight = 0, finished = 0;
  char guessedChar = 0;
  do // boucle principale du jeu
  {
    if (lives > 0)
    {
      isRight = 0;
      printf("Lives : %d / 10\n", lives); // affichage du nombre de vies
      printf("Guess the word: %s\nEnter a letter..", currentWord); // affichage du mot secret
      scanf_s(" %c", &guessedChar); // demande de la lettre, stockage dans guessedChar
      guessedChar = toupper(guessedChar);
      guess = guessedChar;
      guess -= 65;
      if (guess > -1 || guess < 26) // vérification de la validité du caractère
      {
        if (answered[guess] == 0) // vérifions si le caractère n'a pas déjà été entré..
        {
          for (x = 0; x < strlen(gameWord); x++)
          {
            if (gameWord[x] == guessedChar) // si la réponse est bonne
            {
              currentWord[x] = guessedChar;
              isRight = 1;
            }
          }
          printf("\n");
          if (isRight == 0)
          {
            printf("Incorrect guess, you lose one life!\n");
            lives--;
          }
          if (strcmp(gameWord, currentWord) == 0)
          {
            printf("You have succesfully guessed the word: %s.\n", gameWord);
            printf("Congratulations, you win!\n\n");
            finished = 1;
          }
        }
        else
        {
          printf("You have already tried this character!\n\n"); // le caractère a déjà été utilisé
        }
      }
      else
      {
        printf("\nAn invalid character was entered.\n\n"); // le caractère entré est invalide
      }
    }
    else
    {
      printf("You have run out of lives.. You lose!\n\n"); // gameOver
      finished = 1;
    }
  } while (finished == 0);  
}