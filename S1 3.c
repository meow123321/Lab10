#include <stdio.h>
#include <stdlib.h>

void LineCounter(char filename[20])
{
    FILE *f;
    char ch;
    int count;
    f = fopen(filename,"r");

    count=0;
    if(f)
   {
		while((ch=getc(f))!=EOF)
            if (ch=='\n')
            ++count;
    }
   else
        printf("Failed to open the file\n");

    printf("Lines: %d \n", count);

}

int main()
{
    FILE *f;
    char filename[20];
    char ch;
    int count;

    printf("Enter a filename :");
    gets(filename);

    LineCounter(filename);

    return 0;
}
