#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
   char ch;
   FILE *source, *target;

   source = fopen("First.txt", "r");

   if( source == NULL )
   {
      printf("Press any key to exit...\n");
      exit(EXIT_FAILURE);
   }

   target = fopen("Copy.txt", "w");


   while( ( ch = fgetc(source) ) != EOF )
   {
        ch=toupper(ch);
        fputc(ch, target);
   }


   printf("File copied successfully!\n");

   fclose(source);
   fclose(target);

   return 0;
}
