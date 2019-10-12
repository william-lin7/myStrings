#include <stdio.h>
#include <stdlib.h>

int mystrlen(char *s){
  int length = 0;
  while (s[length] != '\0'){
    length++;
  }
  return length;
}

char *mystrcpy(char *dest, char *source){
  // printf("Testing");
  // int size = mystrlen(source);
  // printf("%d", size);
  // for (int q = 0; q < size; q++){
  //   dest[q] = source[q];
  // }
  int i = 0;
  while (*(source + i)){
    *(dest + i) = *(source + i);
    i++;
  }
  return dest;
}


char *mystrncat(char *dest, char *source, int n){
  int size = mystrlen(dest);
  int current = 0;
  while (current < n && *(source + current) != '\0'){
    *(dest + size + current) = *(source + current);
    current++;
  }
  *(dest + size + current) = '\0';
  return dest;
}

int mystrcmp(char *s1, char *s2){
  for (int q = 0; s1[q] != NULL && s2[q] != NULL; q++){
    if (s1[q] > s2[q]) {
      return 1;
    }
    else if (s1[q] < s2[q]) {
      return -1;
    }
  }
  return 0;
}

char *mystrchr(char *s, char c){
  int size = mystrlen(s);
  for (int i = 0; i < size; i++){
    if (*s == c) return s;
    else s++;
  }
  return 0;
}
