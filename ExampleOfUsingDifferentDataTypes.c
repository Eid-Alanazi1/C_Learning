#include <stdio.h>
int main () {
    int items ;
    float itemsCoast ;
    float totalCoast ;
    char current = '$';

    printf("please inter the number of items = ");
    scanf("%d", &items );

    printf("please inter the coast per item  = " );
    scanf("%f" , &itemsCoast);

    totalCoast = items * itemsCoast ;
    
    printf(" the total coast is = %c%.2f" ,current  ,totalCoast );
    return 0 ;
}