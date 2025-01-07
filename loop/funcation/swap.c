#include<stdio.h>
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main(){
    int a,b;
    printf("enter 1st number :");
    scanf("%d",&a);
    printf("enter 2nd number :");
    scanf("%d",&b);
    printf("befor swap a=%d and b=%d \n",a,b);
    swap(&a,&b);
    printf("after swap a=%d and b=%d \n",a,b);
    return 0;
}