#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE * Hon;
    FILE * Hov;
    char honnan[30], hova[30];
    scanf("%s", honnan); scanf("%s", hova);

    Hon = fopen(honnan, "r");
    Hov = fopen(hova, "w");

    char fasz;
    while (fscanf(Hon, "%c", &fasz) == 1)
        fprintf(Hov,"%c", fasz);


    fclose(Hon); fclose(Hov);
    return 0;
}
