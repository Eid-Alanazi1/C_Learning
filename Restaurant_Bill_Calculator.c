#include <stdio.h>
int main () {
    float TotalBillAmount , SupTotal , discount , Final , AmountPerPerson  ;
    float ServiceCharge ;
    int NumberOfPeople ;
    char weekend , loyalty ;
    char dolorSign = '$' ;

    printf("How much is the bill amount = ");
    scanf(" %f" , &TotalBillAmount );

    printf("How many People are there = ");
    scanf(" %d" , &NumberOfPeople);

    ServiceCharge = TotalBillAmount * 15/100 ;

    SupTotal = TotalBillAmount + ServiceCharge ;

    printf("Is it the weekend ? (Y/N)") ;
    scanf(" %c", &weekend);
    
    printf(" Is he have Loyalty Card ? (Y/N)");
    scanf(" %c" , &loyalty) ;

    if (( weekend == 'Y' || weekend == 'y') && ( loyalty == 'Y' || loyalty == 'y' )) {
        discount = SupTotal * 15/100 ;
    }
    else if ( ( weekend == 'Y' || weekend == 'y') || ( loyalty == 'Y' || loyalty == 'y' ) ) {
        discount = SupTotal * 5/100 ; 
    }
    else {
        discount = 0;
    }
   
    Final = SupTotal - discount ;
    AmountPerPerson = Final / NumberOfPeople ;

    if (!(loyalty == 'Y' || loyalty == 'y')) {
        printf ("\nplease get the loyalty card to get the discount\n");
    }

    if (!(( weekend == 'Y' || weekend == 'y') )){
        printf("\nYou can come on the weekend to get 5%% discount <3\n");
    }

    printf(" \nthe Suptotal is = %.2f%c\n" , SupTotal , dolorSign);
    printf(" \nthe discount is = %.2f%c\n" , discount , dolorSign);
    printf(" \nthe amount per person is = %.2f%c\n" , AmountPerPerson , dolorSign);
    printf("\nthe Total Final is %.2f%c\n" , Final , dolorSign);
    return 0 ;
}