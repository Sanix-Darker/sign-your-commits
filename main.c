#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    char resp[10];
    printf("Hey there, how can i call you ?");
    scanf("%s", resp);

    printf("Welcome, %s", resp);

    return EXIT_SUCCESS;
}
