// 12S24007 - Dasmauli Sormin
// 12S24054 - Rahel Juri Elisabet Silaban

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
  char msk[61];
  int j;

  fgets(msk, 61, stdin);  // Membaca input
  msk[strcspn(msk, "\n")] = '\0';  // Menghapus newline jika ada

  for (j = 0; j < strlen(msk); j++) {
      printf("%03d", msk[j]);  // Menampilkan karakter ASCII dalam format 3 digit
  }
  
  printf("\013"); 

  return 0;
}
   



