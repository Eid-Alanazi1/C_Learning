#include <stdio.h>
#include <stdbool.h>

int main () {

int  pricePerDay  ;
short int RentalDays ;
float Total , discount , FinalTotal , extraCharge  ;
char Member , Weekend , CustomerName , CarType ;

printf("Please Enter the first letter of your name : ") ; 
scanf(" %c", &CustomerName ) ; 

printf("please Enter the first letter of the car E = Economy S = SUV L = Luxury ") ;
scanf(" %c", &CarType) ; 

printf("Please enter how many days you want ") ; 
scanf(" %hd", &RentalDays) ;

if ( CarType == 'E' || CarType == 'e' ) {
    pricePerDay = 100 ;
    printf(" Your car type is Economy (%c)\n" , CarType);
    
}
else if (CarType == 'S' || CarType == 's') {
    pricePerDay = 200 ;
   printf(" Your car type is SUV (%c)\n" , CarType);
}
else if (CarType == 'L' || CarType == 'l') {
    pricePerDay = 350 ;
    printf(" Your car type is Luxury (%c)\n" , CarType);
    
}
Total = pricePerDay * RentalDays ;

printf("Please Enter Is the customer a VIP member ? (Y/N)") ; 
scanf(" %c" , &Member) ;

printf("Please enter Is it a weekend rental? (Y/N)") ;
scanf(" %c" , &Weekend) ;


bool isMember = (Member == 'y' || Member == 'Y') ;
bool isWeekend  = ( Weekend == 'y' || Weekend == 'Y') ;
bool LongRental = (RentalDays > 7) ;

if (isMember && isWeekend  ) {
    discount = Total * 20/100 ;
}
else if (isMember || isWeekend  ) {
    discount = Total * 10/100 ;
}
else  {
    discount = 0 ;
}

if (LongRental) {
extraCharge = Total * 5/100 ;
printf("Extra Charge has been applied\n") ;

}
else {
    extraCharge = 0 ;
}

FinalTotal = Total - discount + extraCharge;

printf("Customer Name is = %c\n" , CustomerName) ;
printf("Rental Days is %hd\n" , RentalDays);
printf("price per day is %d\n", pricePerDay) ;
printf("the Subtotal is %.2f\n" , Total) ;
printf("the discount is %.2f\n" , discount) ;
printf("extra charge (if any) %.2f\n" , extraCharge);
printf("the final Total is %.2f\n" , FinalTotal);
printf("%s\n", LongRental ? "Long Rental" : "Short Rental" ) ;


return 0; 













}

