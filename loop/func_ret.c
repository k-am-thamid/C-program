#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
int main(){
    int num1,num2,result;
    printf("enter the first number:");
    scanf("%d",&num1);
    printf("enter the secend number:");
    scanf("%d",&num2);
    result=sum(num1,num2);
    printf("the sum of %d and %d is : %d\n",num1,num2,result);
    return 0;

}