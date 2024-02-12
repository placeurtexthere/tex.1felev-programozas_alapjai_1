# include <stdio.h>

int hexa_value(int in) {
    int cock[6] = {65, 66, 67, 68, 69, 70};
    char gag[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
    if (in >= 'a' && in <= 'z') {
        in = in + 'A' - 'a';
    }
    for (int i = 0; i < 16; i++)
    {
        if (in >= 0 || in <= 9) {
            printf("%c", in);
        } else printf("%c", gag[i]);;
    }
}

int main() {
    char a;
    scanf("%c", &a);
}