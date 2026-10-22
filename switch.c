#include <stdio.h>
int main(){
int day;
printf("Enter day number(1-3): ");
scanf("%d",&day);
switch (day)
{
    case 1:
    printf("Monday");
    break;

    case 2:
    printf("tuesday");
    break;

    case 3:
    printf("wednesday");
    break;
    
    default:
    printf("Invalid day");
}
return 0;
}