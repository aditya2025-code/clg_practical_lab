#include <stdio.h>
#include <windows.h>
int main()
{
  SetConsoleOutputCP(CP_UTF8);
  int n;
  char her_choise;
  char print[] = "Enter any non-zero number to run: ";
  char fprint[] = "Hii..\nI don't know your story,\nI don't know your song,\nI just wanted to ask—\nare you single,\nor is my timing wrong?\n(Enter Y for single or N for not)\n";
  char if_no[] = "🙃 OK.....\nBTW thank you for your honest answer....\nWe will still be good classmate🤗";
  char if_yes[] = "😍😅....I was not expecting this\nI need some time to write more code for this answer....\nTill then please wait....🤗🙏🏻";
  for (int i = 0; print[i] != '\0'; i++)
  {
    putchar(print[i]);
    Sleep(25);
  }
  scanf("%d", &n);
  if (n)
  {

    for (int i = 0; fprint[i] != '\0'; i++)
    {
      putchar(fprint[i]);
      Sleep(100);
    }
    scanf(" %c", &her_choise);
    if (her_choise == 'n' || her_choise == 'N')
      for (int i = 0; if_no[i] != '\0'; i++)
      {
        putchar(if_no[i]);
        Sleep(100);
      }
    else if (her_choise == 'y' || her_choise == 'Y')
      for (int i = 0; if_yes[i] != '\0'; i++)
      {
        putchar(if_yes[i]);
        Sleep(100);
      }
    else
      printf("I think You enter a wrong input");
  }
  else
    printf("I think You enter a wrong input");
  return 0;
}