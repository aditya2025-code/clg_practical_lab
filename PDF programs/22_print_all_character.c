/*
22.	Print characters A–Z using loop
Write a C program to print all uppercase letters from ‘A’ to ‘Z’ using a loop.
*/
#include <stdio.h>

int main()
{
  char x = 65;
  while (x <= 90)
  {
    printf("%c\n", x);
    x++;
  }
  return 0;
}
// OUTPUT:
/*
A
B
C
D
E
F
G
H
I
J
K
L
M
N
O
P
Q
R
S
T
U
V
W
X
Y
Z
*/