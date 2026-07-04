#include <stdio.h> 
#include <stdbool.h>

int main () {
char FirstName , attend , scholarship , Gread , MathGread , EnglishGread ;
int Math , English , Bonus  ;
float Avarage , FinalGread ;

printf(" First letter of the name = ");
scanf(" %c" , &FirstName);

printf("enter the math scour = ");
scanf(" %d" , &Math);

printf("enter the  scour English = ");
scanf(" %d" , &English) ;

Avarage = (Math + English ) / 2.0 ;

printf("Did the student attend all classes ? (Y/N)");
scanf(" %c" , &attend);

printf(" is the student a scholarship student ? (Y/N)");
scanf(" %c" , &scholarship) ;
 
bool Fullattend = (attend == 'Y' || attend == 'y');
bool HeScholarship = (scholarship == 'Y' || scholarship == 'y');


if (Fullattend && HeScholarship ) {
    Bonus = 10 ;
}
else if (Fullattend || HeScholarship ) {
    Bonus = 5 ;
}
else {
    Bonus = 0 ;
}

FinalGread = Avarage + Bonus ;

if ( Math >= 90 ){
    MathGread = 'A' ;
}
else if (Math  >= 80 ) {
    MathGread = 'B' ;
}
else if (Math  >= 70) {
    MathGread = 'C' ;
}
else if ( Math >= 60 ) {
    MathGread = 'D' ;
}
else {
    MathGread = 'F' ;
}




if ( English >= 90 ){
    EnglishGread = 'A' ;
}
else if (English  >= 80 ) {
    EnglishGread = 'B' ;
}
else if (English  >= 70) {
    EnglishGread = 'C' ;
}
else if ( English >= 60 ) {
    EnglishGread = 'D' ;
}
else {
    EnglishGread = 'F' ;
}



if (FinalGread >= 90 ){
    Gread = 'A' ;
}
else if (FinalGread >= 80 ) {
    Gread = 'B' ;
}
else if (FinalGread >= 70) {
    Gread = 'C' ;
}
else if (FinalGread >= 60 ) {
    Gread = 'D' ;
}
else {
    Gread = 'F' ;
}


printf("\nthe name of the student is = %c\n" , FirstName);
printf("\nMath is : %d - the Gread is : %c\n  " , Math , MathGread ) ;
printf("\nEnglish is : %d - the Gread is %c\n" , English ,EnglishGread ) ;
printf("\nthe bonus is  : %d\n" , Bonus ) ;
printf("\nthe Gread : %.2f\n" , FinalGread ) ; 
printf("\nthe Final Gread is : %c\n" , Gread) ;
printf("\nResult is : %s\n" , (FinalGread >= 50) ? "PASS" : "FAIL" );

return 0 ;

}




