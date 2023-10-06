#include <stdio.h>

int main()
{
    char n_1[65];
    char n_2[65];
    scanf("%s%s", n_1, n_2);

    int i = 0;
    while (n_1[i] != '\0' && n_2[i] != '\0')
    {
        if (n_1[i] == n_2[i])
            printf("0");
        else
            printf("1");
        i++;
    }
    return 0;
}

Pas de split pour C ?
OMG ???

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    // The list containing the items to search for.
    char wishlist[257];
    scanf("%[^\n]", wishlist);
    char * token = strtok(wishlist, ", ");
    while( token != NULL ) {
        //printf( " %s\n", token );
        token = strtok(NULL, ", ");
    }
    // The amount of items you will dig through.
    int N;
    scanf("%d", &N); fgetc(stdin);
    for (int i = 0; i < N; i++) {
        char item[1025];
        scanf("%[^\n]", item); fgetc(stdin);
    }

    printf("YOINK\n");
   //printf("YEET\n");

    return 0;
}