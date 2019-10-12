#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headers.h"

int main(){
  char s1[256] = "!@#$%";
  char s2[256] = "hello";
  char s3[256] = "goodbye";
  char s4[256] = "!@#$%";
  printf("s1: %s\n", s1);
  printf("s2: %s\n", s2);
  printf("s3: %s\n\n", s3);

  printf("Testing strlen(s2):\n");
  printf("[standard]: %d\n", strlen(s2));
  printf("[mine]: %d\n\n", mystrlen(s2));

  char cpystr1[10];
  char cpystr2[10];
  printf("Testing strcpy(s1, s2): \n");
  printf("[standard]: %s\n", strcpy(cpystr1, s3));
  printf("[mine]: %s\n\n", mystrcpy(cpystr2, s3));

  printf("Testing strncat(s1, s2, 3):\n");
  printf("[standard]: %s\n", strncat(s1, s2, 3));
  printf("[mine]: %s\n\n", mystrncat(s4, s2, 3));

  char *cmp0 = "undefined";
  char *cmp1 = "undetermined";
  char *cmp2 = "undefined";
  printf("Testing strcmp(): \n");
  printf("Comparing cmp0 to cmp1:\n");
  printf("[standard]: %d\n", strcmp(cmp0, cmp1));
  printf("[mine]: %d\n", mystrcmp(cmp0, cmp1));
  printf("Comparing cmp1 to cmp2:\n");
  printf("[standard]: %d\n", strcmp(cmp1, cmp2));
  printf("[mine]: %d\n", mystrcmp(cmp1, cmp2));
  printf("Comparing cmp0 to cmp2:\n");
  printf("[standard]: %d\n", strcmp(cmp0, cmp2));
  printf("[mine]: %d\n\n", mystrcmp(cmp0, cmp2));

  printf("Testing strchr(s2, 'e'):\n");
  printf("[standard]: %p\n", strchr(s2, 'e'));
  printf("[mine]: %p\n", mystrchr(s2, 'e'));
  printf("Testing strchr(s2, 'l'):\n");
  printf("[standard]: %p\n", strchr(s2, 'l'));
  printf("[mine]: %p\n", mystrchr(s2, 'l'));
  printf("Testing strchr(s2, 'y'):\n");
  printf("[standard]: %p\n", strchr(s2, 'y'));
  printf("[mine]: %p\n", mystrchr(s2, 'y'));
}
