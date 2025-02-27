// 12S4007 - Dasmauli Sormin
// 12S24054 - Rahel Juri Elisabet Silaban

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int _argv, char **_argc) {
  
  char msk[61];
  int r=0;
  int ASCII;
  char ASCII2;

  scanf("%60s", msk);
  while (r< strlen(msk)- 2){
    sscanf(&msk[r], "%3d", &ASCII);
    ASCII2 = (char) ASCII;
    printf("%c", ASCII2);
    r += 3;
  }
  printf("\n");

  return 0;
}
