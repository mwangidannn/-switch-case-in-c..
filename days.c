#include <stdio.h>

int main(){

int number;
printf("Enter a number between 1-7: ");
scanf("%d",&number);
switch(number) {        
case 1:
printf("Todays is Sunday");
break;        
case 2:
printf("Today is Monday");
break;        
case 3:
printf("Today is Teusday");
break;        
case 4:
printf("Welcome to Wensday");
break;        
case 5:
printf("Todays is on a Thursday");
break;        
case 6:
printf("Welcome to Friday");
break;   
case 7:
printf("Welcome to the weekend Saturday");
break;        
default:
printf("Invalid Number it should range between 1-7 ");        
}
return 0;
}
