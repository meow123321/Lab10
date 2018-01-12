#include <stdio.h>
#include <stdlib.h>

void Display(char filename[20])
{
    FILE *f;
    char c;

    f = fopen(filename, "r");
    if (f == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }

    c = fgetc(f);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(f);
    }
}

int main()
{
    FILE *f;

    char filename[20];

    printf("Enter the filename to open \n");
    scanf("%s", filename);

   Display(filename);

    fclose(f);

    return 0;
}

