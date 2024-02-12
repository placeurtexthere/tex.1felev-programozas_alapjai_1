#include <stdio.h>
#include <stdlib.h>
int* filter_average(int *n, int k, int *m){
    double sum = 0;
    for (int i = 0; i < k; i++)
        sum += n[i];

    double av = sum / k;

    int h = 0;

    for (int i = 0; i < k; i++){
        if (av > n[i]) h++;
    }

    int* ujT;
    ujT = (int *)malloc(h * sizeof(int));

    h = 0;
    for (int i = 0; i < kf; i++){
        if (av > n[i]) {ujT[h] = n[i]; h++;}
    }

    *m = h;
    return ujT;
}

int main(void)
{
    int *UjT;
    int T[6] = {3, 5, 11, 4, -1, 2};
    // int T[2] = {1, 2};
    int *geci;
    UjT = filter_average(T, 6, geci);

    for (int i = 0; i < *geci; i++) printf("%d ", UjT[i]);
}
