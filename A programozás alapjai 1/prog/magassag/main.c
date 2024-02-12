#include <stdio.h>

int fvg(int *a, int n) {
    int i , k = 0;
    for (int i = 0; i < n; ++i) {
        if(k < a[i]) k = a[i];
    }
    return k;
}

int main() {

}
