#include <stdio.h>
int main (){

int day, month, year;
printf("please inter your birthdate ");
scanf("%d%*c%d%*c%d", &day, &month,&year);
printf("%d/%d/%d\n", day, month, year);
return 0;
}