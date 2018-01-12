#include <stdio.h>
#include <stdlib.h>

void CharacterCounter(char filename[20])
{
    FILE *f;
    char ch;
    int count;

    count=0;

     f=fopen(filename,"r");

    if(f)
    {
		while((ch=getc(f))!= EOF)
        {
            if (ch!=' ' && ch!='\n')
                count++;
        }
    }
    else
        printf("Failed to open the file\n");


    printf("Characters : %d \n", count);

}

int main()
{
    FILE *f;
    char filename[20];
    char ch;

    printf("Enter a filename :");
    gets(filename);

    CharacterCounter(filename);

    getchar();
    return 0;
}
