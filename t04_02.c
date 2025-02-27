// 12S24007 - Dasmauli Sormin
// 12S24054 - Rahel Juri Elisabet Silaban

#include <stdio.h>
#include <string.h>

int main(int _argv, char **_argc) {
  char string[21];
    scanf("%20[^\n]", string);

    int length = strlen(string);
    for (int d = 0; d < length; d++) {
        printf("%03d", string[d]);
    }

    printf("013");

    return 0;
}


   



