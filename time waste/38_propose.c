#include <stdio.h>
#include <windows.h>
int main()
{
  int n;
  char her_choise;
  char if_no[] = "OK.....\nBTW thank you for your honest answer....\nWe will still be good classmate";
  char if_yes[] = "....I was not expecting this\nI need some time to write more code for this answer....\nTill then please wait....";
  char fprint[] = "Hii..I'm Aditya\nI'm very curious about you...\nBy any chance....\nAre you single??\nEnter Y for yes or N for no\n";
  printf("Enter any non-zero number to run: ");
  scanf("%d", &n);
  if (n)
  {

    for (int i = 0; fprint[i] != 0; i++)
    {
      putchar(fprint[i]);
      Sleep(100);
    }
    scanf(" %c", &her_choise);
    if (her_choise == 'n' || her_choise == 'N')
      for (int i = 0; if_no[i] != 0; i++)
      {
        putchar(if_no[i]);
        Sleep(150);
      }
    else if (her_choise == 'y' || her_choise == 'Y')
      for (int i = 0; if_yes[i] != 0; i++)
      {
        putchar(if_yes[i]);
        Sleep(150);
      }
    else
      printf("I think You enter a wrong input");
  }
  else
    printf("I think You enter a wrong input");
  return 0;
}