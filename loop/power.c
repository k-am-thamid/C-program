#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    printf("enter the base:");
    scanf("%d",&a);
    printf("enter the power:");
    scanf("%d",&b);
    int p=pow(a,b);
    printf("the ans is : %d",p);
    return 0;
}