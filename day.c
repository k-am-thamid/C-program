#include<stdio.h>
int main()
{
int day;
printf("Enter day(1-7) : ");//1-sun,2-mon,3-tue
scanf("%d",&day);
switch (day)
{
case 1:printf("sunday");
    break;
    case 2:printf("monday");
    break;
    case 3:printf("tuesday");
    break;
    case 4:printf("wednesday");
    break;
    case 5:printf("thursday");
    break;
    case 6:printf("friday");
    break;
    case 7:printf("saturday");
    break;
    


default:printf("not valid day!");
    break;
}
    return 0;
}