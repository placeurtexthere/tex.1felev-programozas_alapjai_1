#include <stdio.h>

int is_vowel(char betu)
{
    int i;
    char mag[]= {'a', 'A', 'e', 'E','i', 'I', 'o', 'O', 'u', 'U'};
    for(i=0; i<10; i++)
    {
        if(betu==mag[i])
        return 1;
    }
    return 0;
}

int main()
{
    char betu; 
    int a;
    scanf("%c", &betu);
    is_vowel(betu);

}