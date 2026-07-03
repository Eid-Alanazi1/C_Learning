#include <stdio.h>
int main() {
float salary ;
float rent ;
float bills ;
float reward ;
char answer ;
char AnswerBills ;
char AnswerReward;


printf("please enter your salary = ");
scanf(" %f" , &salary);

printf("do you have rent ? (Y/N) ");
scanf(" %c" , &answer);
if (answer == 'Y' || answer == 'y')
{
    printf("how much is your rent = ");
    scanf(" %f" , &rent);
}
else{ 
    rent = 0 ;
}
printf("do you have any bills (Y/N) ");
scanf(" %c" , &AnswerBills);
if(AnswerBills == 'Y' || AnswerBills == 'y')
{
    printf("How much is your bills = ");
    scanf(" %f" , &bills);
}
    else {
        bills = 0 ;
    }

    printf("Do have any reward (Y/N) ");
    scanf(" %c" , &AnswerReward);
    if(AnswerReward == 'Y' || AnswerReward == 'y'  )
    {
        printf("How much is your Reward = ");
        scanf(" %f" , &reward );
    } 
    else{
        reward = 0 ;
    }
    salary -=rent ;
    salary -=bills;
    salary +=reward;
    printf("The remainder of your salary is = %f " , salary);

    }


  




