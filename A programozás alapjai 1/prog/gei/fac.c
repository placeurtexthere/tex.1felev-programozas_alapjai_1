#include <stdio.h>
int main(void)
{
    char r;
 
    while(scanf("%c", &r)!= EOF ) //addig amig scannelünk 
    {
        if(r >= 'a' && r <= 'z')//ha az r nagyobb egyenlő mint 'a' és kissebb egyenlő mint 'z'
        {
            r = r + 'A' - 'a'; //legyenek dolgok
            printf ("%c", r);
        }
        else
            if(r >= 'A' && r <= 'Z')
            {
                r = r + 'a' - 'A';
                printf("%c", r);
            }
            else printf("%c", r);
    }                
    return 0; //nem tudom miért de működik 
}

//The FitnessGram Pacer Test is a multistage aerobic capacity test that progressively gets more difficult as it continues. The 20 meter pacer test will begin in 30 seconds. Line up at the start. The running speed starts slowly, but gets faster each minute after you hear this signal. Ding  A single lap should be completed each time you hear this sound. Ding  Remember to run in a straight line, and run as long as possible. The second time you fail to complete a lap before the sound, your test is over. The test will begin on the word start. On your mark, get ready, ding 