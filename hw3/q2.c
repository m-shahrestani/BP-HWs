#include <stdio.h> 
#include <math.h>

int main() 
{ 	
	int A,B,C,D,E,F,G,H,S;
	scanf("%d%d%d%d%d%d%d%d",&A,&B,&C,&D,&E,&F,&G,&H); 
    S = (fmin(C,G)-fmax(A,E))*(fmin(D,H)-fmax(B,F)); 
    printf("%d",S);
    return 0; 
} 
