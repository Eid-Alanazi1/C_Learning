#include <stdio.h>
int main () {

    float ProductPrice , total , tax , subtotal , discount, final;
    int quantity ;
    char dollarSign = '$' ;
    char member ;
    printf( "Enter the Product Price :"  );
    scanf(" %f" , &ProductPrice );

    printf("Enter the Product quantity : ");
    scanf(" %d" , &quantity);


     total = ProductPrice * quantity ;
      tax = total * 15/100 ;
       subtotal = total + tax ;

       printf(" Is He have a membership card ? (Y/N)") ;
       scanf(" %c" , &member);
       if( ( member == 'Y' || member == 'y' ) && subtotal > 500) {
            discount = subtotal * 20/100 ;
        }
        else 
            if ( (member == 'Y' || member == 'y' ) || subtotal > 300 ) {

            
            discount = subtotal * 10/100 ;
            }
        
        else {
            discount = 0 ;

        }
        if (!(member == 'Y' || member == 'y' ) ) {
            printf("please join our member ship to get the discount ");

        }
        final = subtotal - discount ;

        printf("Subtotal (with tax): %.2f%c\n", subtotal , dollarSign);
        printf ("Discount : %.2f%c\n" ,discount ,dollarSign );
        printf("Final amount = %.2f%c\n " ,final ,dollarSign );
        return 0;

    }



















    


