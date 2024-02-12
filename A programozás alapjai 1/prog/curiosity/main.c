#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *f1, *f2;
    char *fn;
    int ev;
    char n1, n2, hon1, hon2, o1, o2, p1, p2, mp1, mp2;
    double tempF, tempC;
    fn = (char *)malloc(20 * sizeof(char));
    scanf("%s", fn);
    f1 = fopen(fn, "r");
    scanf("%s", fn);
    f2 = fopen(fn, "w");
    while (fscanf(f1, "MEASUREMENT_TIME %c%c/%c%c/%d %c%c:%c%c:%c%c\nTEMPERATURE %lfF\n", &n1, &n2, &hon1, &hon2, &ev, &o1, &o2, &p1, &p2, &mp1, &mp2, &tempF) == 12)
    {
        tempC = (tempF - 32) * (5.0 / 9.0);
        fprintf(f2, "MERESI_IDO %d.%c%c.%c%c %c%c.%c%c.%c%c\nHOMERSEKLET %.1fC\n", ev, hon1, hon2, n1, n2, o1, o2, p1, p2, mp1, mp2, tempC);
    }
    fclose(f1);
    fclose(f2);
    return 0;
}