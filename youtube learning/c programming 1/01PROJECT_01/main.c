#include <stdio.h>
#include <stdlib.h> // for rand() and srand()
#include <time.h>   // for time()

int main()
{
  // Seed the random number generator with the current time
  srand(time(0));

  // Generate a random number between 0 and 100
  int randomNumber = rand() % 101;
  int no_of_guesses = 0;
  int guessed_no;
  // printf("Random number between 0 and 100: %d\n", randomNumber);

  printf("Guess a number between 0-100\n");
  do
  {
    scanf("%d", &guessed_no);
    if (guessed_no < randomNumber)
    {
      printf("Guess higher number please\n");
    }
    else if (guessed_no > randomNumber)
      printf("Guess lower number please\n");
    else
      printf("!!Congrats!! :) \n ");
    no_of_guesses++;

  } while (guessed_no != randomNumber);

  printf("You guessed the number in %d guesses", no_of_guesses);

  return 0;
}
