#include<stdio.h>
int sum(int a,int b)
{
return a+b;
}
int main(){
    int a,b;
    printf("enter first number : ");
    scanf("%d",&a);
    printf("enter secend number : ");
    scanf("%d",&b);
    int s=sum(a,b);
    printf("the sum=%d",s);
    return 0;
}