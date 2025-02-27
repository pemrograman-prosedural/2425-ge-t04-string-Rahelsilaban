// 12S24007 - Dasmauli Sormin
// 12S24054 - Rahel Juri Elisabet Silaban

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int _argv, char **_argc) {
  char msk[61];
  int j;

  fgets(msk, 61, stdin); // membaca input

  for (j = 0; j < strlen (msk) - 1 ; j++){ // menampilkan ASCII dalam format tiga digit
    printf("%03d", msk[j]);
  }

  return 0;
} 

