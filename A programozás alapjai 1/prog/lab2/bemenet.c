#include <stdio.h>

int main () {
    double sum = 0.000, new;
    char other, new_other;
    //scanf("%lf", &new);
    //if (scanf("%lf", &new) == 1) {
        while (scanf("%lf", &new) == 1) {
            scanf("%lf", &new);
            sum = sum + new;
        }
        printf("%lf", &sum);
    /* } else {
        printf("0.000"); /* ha a program nem talál számot akkor irja ki hogy 0.000 */ 
    //} 
    
    
    
    return 0;
}