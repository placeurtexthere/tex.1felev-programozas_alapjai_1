#include <stdio.h>

int count_vowels(int *t, int meret) {
    int num;
    for (int i = 0; i < meret; ++i) {
        if(is_vowel(t[i]) == 1) num++;
    }
    return num;
}

int main() {
    printf("Hello, World!\n");
    return 0;
}
