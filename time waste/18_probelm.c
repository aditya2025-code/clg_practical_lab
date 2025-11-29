//Q1: WAP in C to find a character is vowel or consonant using while loop and for loop.
#include<stdio.h>
void main()
{
  int choise;
  char a;
  choise = 1;
  while ( choise > 0)
  {
    printf("Enter a character to check vowel or consonant : ");
    scanf(" %c",&a);
    switch(a)
    {
      case 'a':
      case 'A':
      case 'e':
      case 'E':
      case 'i':
      case 'I':
      case 'o':
      case 'O':
      case 'u':
      case 'U': printf("\n\tVOWEL\n");
      break;
      default : printf("\n\tConsonant\n");
    }
    printf("\nIf you want to continue\nEnter 1 and for exit enter 0: ");
    scanf("%d",&choise); 
    printf("\n");
  }
  
}

// #include<stdio.h>
// void main()
// {
//   int choise;
//   char a;
//   choise = 1;
//   for ( ;choise > 0; )
//   {
//     printf("Enter a character to check vowel or consonant : ");
//     scanf(" %c",&a);
//     switch(a)
//     {
//       case 'a':
//       case 'A':
//       case 'e':
//       case 'E':
//       case 'i':
//       case 'I':
//       case 'o':
//       case 'O':
//       case 'u':
//       case 'U': printf("\n\tVOWEL\n");
//       break;
//       default : printf("\n\tConsonant\n");
//     }
//     printf("\nIf you want to continue\nEnter 1 and for exit enter 0: ");
//     scanf("%d",&choise); 
//     printf("\n");
//   }
  
// }