//This program takes a string input and converts it into binary
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  int i, j, c, str[320000];   //max input 320 chars, expected conversion to binary x8 => 320*8 = 2560
  FILE *fplain, *fbinary;

  fplain = fopen("/mnt/c/Users/mp5hd/Desktop/plain.txt", "r");
  fbinary = fopen("/mnt/c/Users/mp5hd/Desktop/binary.txt", "wb");

  if (fplain)
  {
      while ((str[i] = getc(fplain)) != EOF)
      {
        printf("%c", str[i] );
        i=i+1;
      }
    }

    fclose(fplain);


    for (i = 0; str[i] != '\0'; i++) {
      c=str[i];

      for (j = 7; j+1 > 0; j--) {
        if (c>= (1<<j)) {
          c=c-(1<<j);
          //printf("1");
          fprintf(fbinary, "1");
        }
        else
          //printf("0");
          fprintf(fbinary, "0");
      }
    }

    fclose(fbinary);

}
