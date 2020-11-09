#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main()
{
    FILE *fptr;
    char c[100000];

    if ((fptr = fopen("E:\\Code\\algorithm\\login","rb")) == NULL)
    {
        printf("Error! opening file");
        // Program exits if file pointer returns NULL.
        exit(1);         
    }
    setvbuf(stdin, NULL, _IOLBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);

    long isAdmin = 1;
    char username[30];
    memset(username, 0, 30);

    printf("Who are you?\n");
    int nChar           = read(0, username, 0x30);
    username[nChar - 1] = 0;

    if (! strcmp(username, "admin"))
    {
        if (isAdmin) {
            fread(&c,sizeof(c),1, fptr);
            printf("%s", c);
        }
        else
            printf("You are lying!\n");
    }
    else
        printf("Only admin can read the flag!\n");
    fclose(fptr);
    return 0;
}
