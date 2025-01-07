#include<stdio.h>
int swap(int a,int b){
       int x;
    x=a;
    a=b;
    b=x;
 printf("after swap a=%d and b=%d \n",a,b);
}
int main(){
    int a,b;
    printf("enter 1st number :");
    scanf("%d",&a);
    printf("enter 2nd number :");
    scanf("%d",&b);
    printf("befor swap a=%d and b=%d \n",a,b);
    swap(a,b);
     
    return 0;
}
