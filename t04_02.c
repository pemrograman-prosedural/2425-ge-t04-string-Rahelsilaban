// 12S24007 - Dasmauli Sormin
// 12S24054 - Rahel Juri Elisabet Silaban

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
  char msk[61];
  int r;

  fgets(msk, 61, stdin);

  for (r = 0; r < strlen (msk) - 1; r++){
    printf("%03d", msk[r]);
  }

  return 0;
}
   



