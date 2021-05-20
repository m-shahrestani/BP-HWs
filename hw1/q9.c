#include<stdio.h>

int main()
{
    int s = 1, e = 1024, m, inp;
    while(e > s){
        m = (e + s) / 2;
        printf("is the poisonous cup between %d and %d? (if yes enter 1 if not enter 0)\n", s, m);
        scanf("%d", &inp);
        if(inp)
            e = m;
        else
            s = m + 1;
    }
    printf("The cup number %d is poisonous!", s);
    return 0;
}
