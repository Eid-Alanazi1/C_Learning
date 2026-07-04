#include <stdio.h>
#include <stdbool.h>

int main () {
    int Age = 17 ;
    bool isCitizen = true ;

    if ( Age >= 18 ){
        printf("you can vote \n");
        if (isCitizen) { 
            printf(" you citizen you can vote ");

        }
        else {
            printf("You must be citizen to vote ");
        }
    } 
        else{
            printf(" you under 18 you cant vote");
        }
    }
    
    

  
