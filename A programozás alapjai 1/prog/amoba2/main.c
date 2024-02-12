#include <stdio.h>

char check(char t[3][3]) {
    /* 
    00 01 02
    10 11 12
    20 21 22
    */

    /* Sorok */
    if(t[0][0] == 'X' && t[0][1] == 'X' && t[0][2] == 'X') return 'X';
    else if(t[0][0] == 'O' && t[0][1] == 'O' && t[0][2] == 'O') return 'O';
    else if(t[1][0] == 'X' && t[1][1] == 'X' && t[1][2] == 'X') return 'X';
    else if(t[1][0] == 'O' && t[1][1] == 'O' && t[1][2] == 'O') return 'O';
    else if(t[2][0] == 'X' && t[2][1] == 'X' && t[2][2] == 'X') return 'X';
    else if(t[2][0] == 'O' && t[2][1] == 'O' && t[2][2] == 'O') return 'O';

    /* Oszlopok */
    else if(t[0][0] == 'X' && t[1][0] == 'X' && t[2][0] == 'X') return 'X';
    else if(t[0][0] == 'O' && t[1][0] == 'O' && t[2][0] == 'O') return 'O';
    else if(t[0][1] == 'X' && t[1][1] == 'X' && t[2][1] == 'X') return 'X';
    else if(t[0][1] == 'O' && t[1][1] == 'O' && t[2][1] == 'O') return 'O';
    else if(t[0][2] == 'X' && t[1][2] == 'X' && t[2][2] == 'X') return 'X';
    else if(t[0][2] == 'O' && t[1][2] == 'O' && t[2][2] == 'O') return 'O';

    /* Bal fent to jobb lent */
    else if(t[0][0] == 'X' && t[1][1] == 'X' && t[2][2] == 'X') return 'X';
    else if(t[0][0] == 'O' && t[1][1] == 'O' && t[2][2] == 'O') return 'O';

    /* jobb fent to bal lent */
    else if(t[0][2] == 'X' && t[1][1] == 'X' && t[2][0] == 'X') return 'X';
    else if(t[0][2] == 'O' && t[1][1] == 'O' && t[2][0] == 'O') return 'O';

    else return '\0';
}



int main(void) {
    
    return 0;
}