#include<stdio.h>
void checkevenodd(int num){
    if (num % 2 == 0){
    printf("%d is even",num);
    }
        else {
    printf("%d is odd",num);
        }
    return;
}
int main(){
    int a;
    printf("enter a numer: ");
    scanf("%d",&a);
    checkevenodd(a);
    return 0;
}