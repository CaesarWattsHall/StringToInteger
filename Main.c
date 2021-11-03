/*
* Name: Caesar R. Watts-Hall
* Date: Wednesday, November 03, 2021
* SEL Coding Assessment - Instruction No.1
*
* Write a method that takes a string as an input and converts it to an integer.
* Do not use an type of built in methods like int.Parse or atoi. Assume this function
* would be handling direct user input and will output directly to the user.
*/

#include <stdio.h>
int toString(char []);

int main()
{
  char a[100];
  int n;
    printf("Input a valid string to convert to integer\n");
    scanf("%s", a);
    n = toString(a);

    printf("String  = %s\nInteger = %d\n", a, n);
  return 0;
}

int toString(char a[]) {
  int c, sign, offset, n;

  if (a[0] == '-') {  // Handle negative integers
    sign = -1;
  }

  if (sign == -1) {  // Set starting position to convert
    offset = 1;
  }
  else {
    offset = 0;
  }

  n = 0;

  for (c = offset; a[c] != '\0'; c++) {
    n = n * 10 + a[c] - '0';
  }

  if (sign == -1) {
    n = -n;
  }

  return n;
}